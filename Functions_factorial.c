#include<stdio.h>
int fact(int a);
void main(){
    int a,r;
    printf("Enter the number:");
    scanf("%d",&a);
    r=fact(a);
    printf("factorial=%d",r);
}
int fact(int a){
    if(a==1){
        return 1;
    }
    return a*fact(a-1);
}
