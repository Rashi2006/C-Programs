#include<stdio.h>
void main(){
    int x,y,i=1,ans=1;
    printf("Enter the value of base:");
    scanf("%d",&x);
    printf("Enter the value of exponent:");
    scanf("%d",&y);
    while(i<=y){
        ans=ans*x;
        i++;
    }
     printf("x^y = %d",ans);

}