#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n = 234;
    int reverse = 0;
    int orginal = n;
   while(n>0){
        reverse = (reverse * 10) + (n % 10);
        n = n/10;
    }
    printf("%d\n",reverse);
   int diff = n-reverse;
   printf("%d",diff);
    return 0;
}
