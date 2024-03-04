#include<stdio.h>
void main(){
    int a,b,i;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    printf("Numbers divisible by 2 are:");
    i=a;
    while((i>=a) && (i<=b)){
        //printf("%d",i);
        if((i%2)==0){
        printf("%d  ",i);
        }
        i++;
    }
}