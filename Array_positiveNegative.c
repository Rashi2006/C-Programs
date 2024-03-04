#include<stdio.h>
void main(){
    int n;
     printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n],i,count=0,ans=0;
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            count=count+1;
        }else{
            ans=ans+1;
        }
    }
    printf("\npos=%d , neg=%d",count,ans);
}