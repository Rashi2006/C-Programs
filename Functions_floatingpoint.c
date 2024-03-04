#include<stdio.h>
float max(float a,float b, float c);
void main(){
    float a,b,c,maxm;
    printf("Enter three numbers:");
    scanf("%f %f %f",&a,&b,&c);
   maxm=max(a,b,c);
   printf("%f",maxm);
}
float max(float a,float b, float c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b>c){
            return b;
        }else{
            return c;
        }
    }
}
