#include<stdio.h>
void main(){
    int x,y,i,count=1;
    printf("Enter the number x:");
    scanf("%d",&x);
    printf("\nEnter the power y:");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
          count=count*x;
    }
    printf("x^y=%d",count);
}