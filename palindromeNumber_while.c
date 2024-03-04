#include<stdio.h>
void main(){
    int n,i,r=0,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        i=n%10;
        r=r*10+i;
        n=n/10;
    }
    if(r==temp){
        printf("The number is palindrome Number.");
    }else{
        printf("The number is not palindrome Number.");
    }
}