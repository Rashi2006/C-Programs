#include<stdio.h>
void main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int R[n],i,sum=0,count=0;
    for(i=0;i<n;i++){
        printf("R[%d]=",i);
        scanf("%d",&R[i]);
    }
    int S[n];
    for(i=0;i<n;i++){
        S[i]=R[i];
        printf(" S[%d]=%d",i,S[i]);
    }
    
}