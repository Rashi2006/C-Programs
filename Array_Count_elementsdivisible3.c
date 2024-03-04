#include<stdio.h>
void main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int R[n],i,count=0;
    for(i=0;i<n;i++){
        printf("R[%d]=",i);
        scanf("%d",&R[i]);
    }
    for(i=0;i<n;i++){
        if(R[i]%3==0){
            count++;
        }
    }
    printf("%d",count);
}