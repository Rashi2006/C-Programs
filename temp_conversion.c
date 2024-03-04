#include<stdio.h>
void main(){
    float F,C;
    printf("Enter the temperature into Fahrenheit:");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("C=%f",C);
}