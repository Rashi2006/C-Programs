#include<stdio.h>
void main(){
    int n,i=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n){
       if(i%2!=0){ 
        printf("\n%d",i);
        }
        i++;
    }
}