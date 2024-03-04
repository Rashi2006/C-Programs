#include<stdio.h>
#include<math.h>
void main(){
    float i=1,n,r,sum=0;
    printf("Enter the number:");
    scanf("%f",&n);
    while(i<=n){
        r=pow(i,2);
        sum=sum+r;
        i++;
    }
    printf("sum of series=%f",sum);
}