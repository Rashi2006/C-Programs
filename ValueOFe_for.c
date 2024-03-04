#include<stdio.h>
void main(){
    float n,i,j,r=1,count=1,temp;
    printf("Enter the number:");
    scanf("%f",&n);
    temp=n;
    for(i=1;i<=(n);i++){
        r=1;
        for(j=1;j<=temp;j++){
         r=r*j;
        }
      count=count+1/(r);
      temp=temp-1;
    }
    printf("\nValue of e = %f",count);
}

//f=f*i;
//i=(1.0/r);