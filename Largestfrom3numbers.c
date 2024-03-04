#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("a is largest no.");
        }else{
            printf("c is largest no.");
        }
    }else{
        if(b>c){
            printf("b is largest no.");
        }else{
            printf("c is largest no.");
        }
    }
}