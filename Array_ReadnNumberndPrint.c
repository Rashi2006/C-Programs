#include<stdio.h>
void main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }

    printf("Reverse order");
    for(i=(n-1);i>=0;i--){
        printf("\narr[%d]=%d",i,arr[i]);
    }
}