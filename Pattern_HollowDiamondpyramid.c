#include<stdio.h>
void main(){
    int i,j,r,s;
    //upper hollow pyramid
    for(i=1;i<=5;i++){
        for(j=5;i<=(j-1);j--){
            printf(" ");
        }
        for(j=1;j<=((2*i)-1);j++){
           if((j==1)||(j==((2*i)-1))){
            printf("*");
           }else{
            printf(" ");
           }
        }
        printf("\n");
    }
    //lower hollow pyramid
    for(r=5;r>=1;r--){
      if(r==5){

      }else{
        for(s=1;s<=(5-r);s++){
            printf(" ");
        }
        for(s=1;s<=((2*r)-1);s++){
            
            
                if((s==1)||(s==((2*r)-1))){
                printf("*");
                }else{
                printf(" ");
                }
            }
        
        printf("\n");
      }
    }
}
