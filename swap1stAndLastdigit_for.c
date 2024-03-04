#include<stdio.h>
#include<math.h>
void main(){
    int n,i,fd,ld,q,count=0,a; float s;
    printf("Enter the number:");
    scanf("%d",&n);
    q=n;
    for(i=1;n!=0;i++){
      count=count+1;//no. of digits
      n=n/10;
    }
    
     ld=q%10;//last digit
     s=pow(10,(count-1));
     fd=q/s;//first digit
    // printf("\ns=%f fd=%d",s,fd);
   
   a=fd*s;
   q=q-a;
   q=q-ld+fd;
   q=q+(ld*s);
   
   printf("\nswap digit=%d",q);
   
}
