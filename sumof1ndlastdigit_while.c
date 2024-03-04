#include<stdio.h>
#include<math.h>
void main(){
    int n,r,count=0,temp,p,po;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
       temp=temp/10;
       count=count+1;//count=no. of digit
        }
    printf("count %d",count);
    
    po=pow(10,(count-1));
    r=n/po;//r=first digit
    p=n%10;//p=last digit
    printf("\n%d",r+p);
}
