#include<stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    ((a^b)==0)?printf("both numbers are equal."):printf("both numbers are unequal");
        
    
}