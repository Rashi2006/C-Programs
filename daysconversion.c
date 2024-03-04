#include<stdio.h>
void main(){
    int D,Y,W;
    printf("Enter the no. of days:");
    scanf("%d",&D),
    Y=D/365;
    W=(D-(Y*365))/7;
    D=D-(Y*365+W*7);
    printf("YY:WW:DD = %d:%d:%d",Y,W,D);
}