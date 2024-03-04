#include<stdio.h>
void main(){
    int x,y,i,j,count=0,temp;
    printf("Enter the value of base:");
    scanf("%d",&x);
    printf("Enter the value of exponent:");
    scanf("%d",&y);
    temp = x;
    for(i=1;i<=(y-1);i++){
       //printf("*i=%d",i);
       count=0;
       for(j=1;j<=x;j++){
        //printf("j=%d",j);
         count=count+temp;
        }
       temp=count;
       //count=0;
    }
    printf("x^y=%d",count);

}