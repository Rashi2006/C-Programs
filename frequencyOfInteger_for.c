#include<stdio.h>
void main(){
     int n,d,i,r,count=0;
     printf("Enter the number:");
     scanf("%d",&n);
     printf("Enter the digit :");
     scanf("%d",&d);
     for(i=1;n!=0;i++){
        r=n%10;
        if(r==d){
           count=count+1;
        }
        n=n/10;
     }
     printf("frequency of given digit=%d",count);
}