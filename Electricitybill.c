#include<stdio.h>
void main(){
    float u, amount , Total;
    printf("Enter the Units:");
    scanf("%f",&u);
     if(u>=0 && u<=50){
        amount=u*0.50;
        printf("Amount=%f",amount);
     }else if(u>=51 && u<=150){
        amount=(50*0.50)+(u-50)*0.75;
        printf("Amount=%f",amount);
     }else if(u>=151 && u<=250){
       amount=(50*0.50)+(100*0.75)+(u-150)*1.20;
       printf("Amount=%f",amount); 
     }else if(u>250){
        amount=(50*0.50)+(100*0.75)+(100*1.20)+(u-250)*1.50;
        printf("Amount=%f",amount);
     }else{
      printf("invalid unit");
     }

     
     Total= amount + amount*20/100;
     printf("\nTotal bill=%f",Total);
}