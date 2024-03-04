#include<stdio.h>
void main(){
    int n,i,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        count=count+i;
    }
    printf("Sum=%d",count);
}