#include<stdio.h>
void main(){
    int H[5],W[5],i,count=0;
    printf("Enter Height");
    for(i=0;i<5;i++){
        printf("\nH[%d]=",i);
        scanf("%d",&H[i]);
    }
    printf("Enter Weight");
    for(i=0;i<5;i++){
        printf("W[%d]=",i);
        scanf("%d",&W[i]);
    }
    for(i=0;i<5;i++){
        if((H[i]>170) && (W[i]<50)){
            count=count+1;
        }
    }
    printf("no. of person=%d",count);
}