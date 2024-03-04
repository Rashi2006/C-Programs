#include<stdio.h>
void main(){
    int n,i,j,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("0");
    for(i=1;i<=n;i++){
         for(j=1;j<=i;j++){
               //printf("%d",j);
               printf("+%d",j);
               count=count+j;

         }
    }
    printf("\nsum=%d",count);
}