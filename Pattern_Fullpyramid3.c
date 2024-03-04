#include<stdio.h>
void main(){
    int i,j,k=65,r=1;
    for(i=1;i<=5;i++){
        for(j=5;i<=(j-1);j--){
            printf(" ");
        }
        r=1;
        for(j=1;j<=((2*i)-1);j++){
            if(j%2==1){
                if(i%2==0){
                    printf("%c",k);
                    k++;
                }else{
                    printf("%d",r);
                    r++;
                }
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}