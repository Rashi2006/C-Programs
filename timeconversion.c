#include<stdio.h>
void main(){
    int H,S,M;
    printf("Enter the no. of seconds:");
    scanf("%d",&S);
    H=S/3600;
    M=(S-H*3600)/60;
    S=S-(H*3600+M*60);
    printf("HH:MM:SS = %d:%d:%d",H,M,S);
}