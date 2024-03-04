#include<stdio.h>
void main(){
  int a,b; char c;
  printf("Enter the operation of your choice:");
    scanf("%c",&c);
   printf("Enter the value of a:");
    scanf("%d",&a);
   printf("Enter the value of b:");
    scanf("%d",&b);
    if(c=='+'){
        printf("%d",a+b);
    }else if(c=='-'){
        printf("%d",a-b);
    }else if(c=='*'){
        printf("%d",a*b);
    }else if(c=='/'){
        printf("%d",a/b);   
    }
    

    

}