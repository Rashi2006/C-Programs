#include<stdio.h>
void main(){
    int *a,*b,x,y,temp;
    printf("Enter the numbers:");
    scanf("%d",&x);
    scanf("%d",&y);
    a=&x;
    b=&y;
    // printf("%d %d",*a,*b);
    // temp=&x;;
    // a=&y;
    // b=temp;
    // printf("\n%d %d",*a,*b);

    temp=*a;
    *a=*b;
    *b=temp;
     printf("\n%d %d",*a,*b);


}