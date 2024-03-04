#include<stdio.h>
void main(){
    int n,m,i,j;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    printf("Enter the no. of columns");
    scanf("%d",&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
}