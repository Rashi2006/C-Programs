#include<stdio.h>
void main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if((n&1)==0){
        printf("THe given number is even");
    }else{
        printf("The given no. is odd");
    }
}