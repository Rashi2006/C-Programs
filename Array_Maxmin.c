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
    //MAX
    int max;
    max=arr[0];
    for(i=0;i<n;i++){
        if(max>=arr[i]){
        }
        else{
            max=arr[i];
        }
    }
    printf("\nMax=%d",max);
    //MIN
    int min;
    min=arr[0];
    for(i=0;i<n;i++){
        if(min<=arr[i]){}
        else{
            min=arr[i];
        }
    }
    printf("\nMin=%d",min);
    //SUM
    int sum=0;
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("\nSum=%d",sum);
    //AVERAGE
    float avg;
    avg=sum/n;
    printf("\nAverage = %f",avg);
}