#include<stdio.h>
int pow(int , int);
int main(){
    int n,p,r;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the power:");
    scanf("%d",&p);
    r=pow(n,p);
    printf("\npower=%d",r);
}
int pow(int n,int p){
    int i,count=1;
    for(i=1;i<=p;i++){
        count=count*n;
    }
    return count;
}
