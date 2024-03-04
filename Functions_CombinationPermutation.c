#include<stdio.h>
int fact(int x){
    int i,count=1;
    for(i=1;i<=x;i++){
        count=count*i;
    }
    return count;
}
int main(){
    int n,r,ncr,npr,nfact,rfact,nrfact;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);
    nfact=fact(n);
    rfact=fact(r);
    nrfact=fact(n-r);

    ncr=nfact/(rfact*nrfact);
    npr=nfact/(nrfact);

    printf("ncr=%d , npr=%d ",ncr,npr);
}
