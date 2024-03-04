#include<stdio.h>
void main(){
    int n,i,r=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        i=n%10;
        r=(r*10)+i;
        n=n/10;
    }
    printf("reverse no.=%d",r);
}