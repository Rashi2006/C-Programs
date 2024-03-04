#include<stdio.h>
void main(){
    int n,r,p=1,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        r=n%2;
        n=n/2;
        s=s+(r*p);
        p=p*10;

    
    }
    printf("%d",s);
    
}