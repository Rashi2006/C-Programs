#include<stdio.h>
#include<math.h>
void main(){
    float R,G,B,W,C,M,Y,BL,R1,G1,B1,Max;
    printf("Enter the RGB values between 0 to 255:");
    scanf("%f %f %f",&R,&G,&B);
    
    if((0<=R<=255) && (0<=G<=255) && (0<=B<=255)){
     R1=R/255;
     G1=G/255;
     B1=B/255;  
      if(R1>B1 && R1>G1){
           Max=R1;
           printf("Max=%.2f",Max);
        }
        else if(B1>R1 && B1>G1){
           Max=B1;
           printf("Max=%.2f",Max);
        }
        else if(G1>B1 && G1>R1){
           Max=G1;
           printf("Max=%.2f",Max);
        } 
    W=Max;
    printf("White=%.2f",W);
    C=(W-R1)/W;
    printf("\nCyan=%.2f",C);
    M=(W-G1)/W;
    printf("\nMagenta=%.2f",M);
    Y=(W-B1)/W;
    printf("\nYellow=%.2f",Y);
    BL=(1-W);
    printf("\nBlack=%.2f",BL);
} else {
    printf("Invalid input");
}  

      
    
       
    

}