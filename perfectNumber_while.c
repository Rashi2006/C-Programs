#include<stdio.h>
void main(){
    int n,i=1,r=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=(n-1)){
        if((n%i)==0){
            r=r+i;
        }
        i++;
    }
    if(r==n){
        printf("The number is perfect number.");
    }else{
         printf("The number is not perfect number.");
    }
}