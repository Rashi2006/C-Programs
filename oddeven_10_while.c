#include<stdio.h>
void main(){
    int i=1,n,ans=0,count=0;
   
    while(i<11){
        printf("\nEnter number:");
       scanf("%d",&n);
        if((n%2)==0){
            ans=ans+1;
            
        }else{
            count=count+1;
        }
         i++;
    }
    printf("There are %d even numbers\nThere are %d odd numbers.",ans,count);

}