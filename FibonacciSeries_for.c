#include<stdio.h>
void main(){
    int i,n,a=0,b=1,r;
    
    printf("Enter the no. of terms is Fabonacci series:");
    scanf("%d",&n);
    printf(" %d %d",a,b);
    //0 1 1 2 3 5 8 13
    for(i=1;i<=(n-2);i++){
    	r=a+b;
    	printf(" %d",r);
    	a=b;
    	b=r;
        
    }
}
