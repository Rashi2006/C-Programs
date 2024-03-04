#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        if(b>c){
            printf("b is second largest number.");
        }else {
            printf("c is second largest number.");
        }
    }else if(b>a && b>c){
        if(a>c){
            printf("a is second largest number.");
        }else{
            printf("c is second largest number.");
        }
    }else{
        if(a>b){
            printf("a is second largest.");
        }else{
            printf("b is second largest.");
        }
    }
    
}