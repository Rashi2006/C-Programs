#include<stdio.h>
void main(){
    int n,i=1,count;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        count=n*i;
        printf("\n%d*%d=%d",n,i,count);
    }
}