#include<stdio.h>
void main(){
    float Bs,Gs;
    printf("Enter the amount of Basic Salary:");
    scanf("%f",&Bs);
if(Bs>=30000){
    Gs=Bs+Bs*30/100+Bs*95/100;
    printf("Gross Salary=%f",Gs);
}else if(Bs>=20000){
    Gs=Bs+Bs*25/100+Bs*90/100;
    printf("Gross Salary=%f",Gs);
}else if(Bs>=10000){
    Gs=Bs+Bs*20/100+Bs*80/100;
    printf("Gross Salary=%f",Gs);
}
}