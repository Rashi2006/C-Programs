#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
       for(j=5;i<=(j-1);j--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}