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
    int x;
    printf("Enter the element :");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(arr[i]==x){
            printf("arr[%d]=%d",i,x);
            break;
        }
    }

}