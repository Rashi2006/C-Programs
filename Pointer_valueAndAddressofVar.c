#include<stdio.h>
void main(){
    int *a,r=5;
    a=&r;
    printf("address=%d value=%d",a,*a);
}