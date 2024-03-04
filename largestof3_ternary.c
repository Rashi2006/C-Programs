#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    d=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("largest no. = %d",d);
}