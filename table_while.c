#include<stdio.h>
void main(){
    int i=1,n,r;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=10){
        r=n*i;
        printf("\n%d*%d=%d",n,i,r);
        i++;
    }
}