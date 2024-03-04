#include<stdio.h>
void main(){
    int n,a,b;
    printf("Enter the value of n:");
    scanf("%d",&n);
    a=(n>>1);
    b=(n<<1);
    printf("multiplication=%d,division=%d",b,a);

}