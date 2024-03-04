#include<stdio.h>
#include<math.h>
void main(){
    long int i=1,n;
    while(i<=10){
        n=pow(i,2);
        printf("\nn=%ld square=%ld",i,n);
        i++;
    }
}