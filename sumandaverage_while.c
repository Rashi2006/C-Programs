#include<stdio.h>
void main(){
    int n,count=0,r,sum=0;
    printf("Enter -1 at the end");
    
    while(1){
        printf(" Enter the numbers:");
       scanf("%d",&n);
        sum=sum+n;
        count=count+1;
        printf("[1] enter more\n");
        printf("[2] exit");
        scanf("%d",&r);
        if(r==2){
            break;
        }
    }
    printf("sum=%d average=%d",sum,sum/count);
    
}