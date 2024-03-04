#include<stdio.h>
void main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n],i,r,j;
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<(n);i++){
        for(j=0;j<(n-1);j++){
          if(arr[j]>arr[j+1]){
             r=arr[j+1];
             arr[j+1]=arr[j];
             arr[j]=r;
          }
    }
    
}
    for(j=0;j<n;j++){
        printf(" %d",arr[j]);
    }
}