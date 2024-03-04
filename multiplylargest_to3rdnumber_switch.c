#include<stdio.h>
void main(){
    int a,b,c,d,r;
    printf("Enter Three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    d=(a>b)?((a>c)?a:c):((b>c)?b:c);
    //printf("\n%d",d);
    r=(a>b)?((b>c)?c:b):((a>c)?c:a);
    //printf("\n%d",r);
    printf("\n%d*%d=%d",d,r,d*r);
   
}