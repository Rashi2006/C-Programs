#include<stdio.h>
void main(){
    int n,m,i,j;
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
    int p,r;
    printf("Enter the no. of rows for M2");
    scanf("%d",&p);
    printf("Enter the no. of columns for M2");
    scanf("%d",&r);
    int b[p][r],sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("b[%d][%d]=",i,j);
        scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            sum=a[i][j]+b[i][j];
            printf(" a[%d][%d]+b[%d][%d]=%d",i,j,i,j,sum);
        }
        printf("\n");
    }
}  