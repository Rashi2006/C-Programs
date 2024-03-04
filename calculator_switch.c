#include<stdio.h>
void main(){
    int a , b; char c;
    printf("Enter operation :");
    scanf("%c",&c);
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    
    switch(c){
        case '+':printf("a+b=%d",a+b);
                 break;
        case '-':printf("a-b=%d",a-b);
                 break; 
         case'*':printf("a*b=%d",a*b);
                 break;
        case '/':printf("a/b=%d",a/b);
                 break;   
        default:printf("invalid input");
                  break;                                
    }

}