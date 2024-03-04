#include<stdio.h>
void ar(int [] , int);
void main(){
    int n;
     printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    ar(arr , n);
}
void ar(int arr[],int n){
    int i;
     for(i=0;i<n;i++){
        printf("arr[%d]=%d",i,arr[i]);
     }
     
    
}