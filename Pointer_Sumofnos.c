#include<stdio.h>
void main(){
    int *a,*b ,x,y;
    printf("Enter the Numbers :");
    scanf("%d",&x);
    scanf("%d",&y);
    a=&x;
    b=&y;
    printf("\n sum=%d",(*a)+(*b));
}