#include<stdio.h>
void main(){
    int n,m,i,j,temp;
    printf("Enter the no. of rows for M1");
    scanf("%d",&n);
    printf("Enter the no. of columns for M1");
    scanf("%d",&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    temp=n;
    n=m;
    m=temp;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){

           printf(" a[%d][%d]=%d",i,j,a[j][i]);
        }
    }

}