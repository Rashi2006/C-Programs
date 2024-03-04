#include<stdio.h>
#include<math.h>
void main(){
    int n,count=0,i,r,temp,sum=0,p;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    p=n;
    while(n!=0){
        count++;
        n=n/10;
    }
    printf("\nno. of digits=%d",count);//count=no. of digits
    
    while(temp!=0){   //n ni value change thai gy atle temp
        r=temp%10;
        i=pow(r,count);
        sum=sum+i;
        temp=temp/10;
    }
    printf("\nsum=%d",sum);
    if(sum==p){  //n ane temp ni value change atle p
        printf("\nArmstrong number");
    }else{
        printf("\nNot an Armstrong number");
    }

}