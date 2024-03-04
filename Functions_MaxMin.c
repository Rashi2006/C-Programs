#include<stdio.h>
void main(){
    int a,b;
    printf("enter two number=");
    scanf("%d",&a);
    scanf("%d",&b);

     maxmin(a,b);
}

void maxmin(int a,int b){
    
    int max,min;
    if(a>b){
       max=a;
       min=b; 
    }else{
        max=b;
        min=a;
    }
printf("max=%d,min=%d",max,min);
}
