#include<stdio.h>
void main(){
    float P,R,T,SI;
    printf("Enter the principle amount:");
    scanf("%f",&P);
    printf("Enter the Rate of interest:");
    scanf("%f",&R);
    printf("Enter the time period:");
    scanf("%f",&T);
    SI=(P*R*T)/100;
    printf("SI=%f",SI);
}