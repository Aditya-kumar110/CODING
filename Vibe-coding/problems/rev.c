#include<stdio.h>

void reversearray(int *arr, int size){


for(int i = 0; i<size/2;i++){
    int temp;
    temp = *(arr + i);
    *(arr + i) = *(arr + (size-i-1));
    *(arr + (size-i-1)) = temp;
}
}

int main(){
    int arr[100],size;
    printf("Enter size of array.");
    scanf("%d",&size);
    for(int i = 0;i<size;i++){
    scanf("%d",&arr[i]);
}
    reversearray(arr,size);

    printf("After array is reversed \n");
for(int i = 0;i<size;i++){
    printf("%d  ",*(arr + i));
}

    return 0;
}