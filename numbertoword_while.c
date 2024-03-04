#include<stdio.h>
void main(){
    int n,i,r,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        i=n%10;
        sum=sum*10+i;
        n=n/10;
    }
    //printf("\n%d",sum);
    while(sum!=0){
        r=sum%10;
        switch(r){
            case 0:printf("Zero");
                   break;
            case 1:printf("One");
                   break;
            case 2:printf("Two");
                   break;
            case 3:printf("Three");
                   break;
            case 4:printf("Four");
                   break;
            case 5:printf("Five");
                   break;
            case 6:printf("Six");
                   break;
            case 7:printf("Seven");
                   break;
            case 8:printf("Eight");
                   break;
            case 9:printf("Nine");
                   break;
            default:printf("invalid input");
                   break;
        } 
        sum=sum/10;
        
        
    }
}