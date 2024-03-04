#include<stdio.h>
#include<math.h>
void main(){
    float R1,R2,a,b,c,d,R;
    printf("Enter the value of a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    d=(pow(b,2)-(4*a*c));
    printf("d=%.2f",d);
    if(a==0){
        printf("\nEquation has infinite no. of roots.");
    }else{
          if(d<0){
            printf("\nEquation has imaginary roots.");
          }else if(d==0){
            R=(-b)/(2*a);
            printf("\nEquation has equal and real roots.\nR1=R2=%f",R);
          }else if(d>0){
            R1=(-b+sqrt(d))/(2.0*a);
            R2=(-b-sqrt(d))/(2.0*a);
            printf("R1=%f,R2=%f",R1,R2);
          }
    }
}