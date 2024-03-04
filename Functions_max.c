#include<stdio.h>
int max(int,int);

void main(){
    int a,b,maxm;
    printf("Enter the two numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    maxm=max(a,b);
    printf("max=%d",maxm);
}
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}


