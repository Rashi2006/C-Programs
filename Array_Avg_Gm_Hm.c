#include<stdio.h>
#include<math.h>
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
    float m = (float)sum/n;
    
    printf("\nAverage = %f",m);
    //GEOMETRIC MEAN
    float p,R=1,GM;
    p=n;
    for(i=0;i<n;i++){
        R=R*arr[i];
    }
    printf("\nR=%f",R);
    GM=(float)pow(R,1/p);
    printf("\nGM=%f",GM);
    //HARMONIC MEAN
    float HM,s=0,j;
    for(i=0;i<n;i++){
        j=arr[i];
        s=s+(1/j);
    }
    HM=n/s;
    printf("\nHM=%f",HM);
}