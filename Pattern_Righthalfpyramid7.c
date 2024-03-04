#include<stdio.h>
void main(){
    int i,j,temp,r=1;
    for(i=1;i<=5;i++){
        if(i%2==1){
            r=1;
        }else{
            r=0;
        }
        for(j=1;j<=i;j++){
          printf("%d",r);
          if(r==1){
            r=0;
          }else{
            r=1;
          }
        }
        printf("\n");
        
    }
}