#include<stdio.h>
void main(){
    int n,m,a,b,i,hcf,lcm;
    printf("Enter the number 1:");
    scanf("%d",&n);
    printf("Enter the number 2:");
    scanf("%d",&m);
    printf("\nFactors of %d :",n);
    a=n;
    b=m;
    while(b!=0){
       i=b;
       b=a%b;
       a=i;
    }
    hcf=a;
    lcm=(n*m)/hcf;
    printf("\nhcf of %d & %d = %d",n,m,hcf);
    printf("\nlcm of %d & %d = %d",n,m,lcm);
    

    
}