#include<stdio.h>
int simpleintrest(int,int,int);
void main(){
    int p,r,t,si,SI;
    printf("Enter the principle amount:");
    scanf("%d",&p);
    printf("Enter the rate of intrest:");
    scanf("%d",&r);
    printf("Enter the time period:");
    scanf("%d",&t);
    si=simpleintrest(p,r,t);
    printf("%d",si);

}
int simpleintrest(int p,int r,int t){
    int SI;
    SI=(p*r*t)/100;
    return SI;
}