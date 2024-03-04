#include<stdio.h>
void main(){
    int n;
    printf("Enter The number:");
    scanf("%d",&n);
    if((n&1)==0){
        printf("Last digit is even.");

    }else{
        printf("Last digit is odd.");
    }

    
}