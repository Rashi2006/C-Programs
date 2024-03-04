#include<stdio.h>
void main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n],i,sum=0,count=0;
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    //SUM
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("\nSum=%d",sum);
    //AVERAGE
    float avg = (float)sum/n;
    
    printf("\nAverage = %f",avg);


    //COUNT
    for(i=0;i<n;i++){
        if(arr[i]>avg){
            count=count+1;
        }
    }
    printf("count=%d",count);
}
