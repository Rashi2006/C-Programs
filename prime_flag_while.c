#include<stdio.h>
void main(){
    int n,i=1,flag=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n){
        if((n%i)==0){
            flag=flag+1;
        }
        i++;
    }
    if(flag==2){
        printf("Prime number");
    }else{
        printf("Not a Prime number");
    }
}