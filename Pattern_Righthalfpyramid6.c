#include<stdio.h>
void main(){
    int i,j,k=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d",k);
            if(k==1){
                k=0;
            }else{
                k=1;
            }
        }
        printf("\n");
    }
}