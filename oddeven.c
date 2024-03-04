#include<stdio.h>
void main(){
    int n;
    printf("Read the given no. :");
    scanf("%d",&n);

    if(n%2==0){
        printf("No. is even");
    }else{
        printf("No. is odd");
    }
}