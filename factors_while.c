#include<stdio.h>
void main(){
    int i=1,n,count=1;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("factors of number :");
    while(i<=n){
       if((n%i)==0){
             printf(" %d",i);
       }
      i++;
    }
    
}