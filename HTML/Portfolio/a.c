#include<stdio.h>
int main(){
    int count= 0;
    int nums[] = { -6,2,5,-2,-7,-1,3};
    int numsSize = 7;
    int target = -2;
    for(int i = 0;i<numsSize-1;i++){
        for(int j = i+1;j<numsSize;j++){
            if(nums[i] + nums[j] == target){
                count++;
            }
            if(nums[i] - nums[j] == target){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}