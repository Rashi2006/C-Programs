#include<stdio.h>
void main(){
    float R1,R2,R3,R4,R5; float Per;
    printf("Enter the marks of each and every subject:");
    scanf("%f %f %f %f %f",&R1,&R2,&R3,&R4,&R5);
    Per=(R1+R2+R3+R4+R5)/5.0;
    printf("%f",Per);
    if(Per<35){
        printf("\nFail");
    }else if(Per>=35 && Per<=45){
        printf("\nPass");
    }else if(Per>=46 && Per<=60){
        printf("\nSecond class");
    }else if(Per>=61 && Per<=70){
        printf("\nFirst class");
    }else if(Per>70){
        printf("\nDistinction");
    }

}