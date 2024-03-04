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

    int b[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("b[%d][%d]=",i,j);
        scanf("%d",&b[i][j]);
        }
    }
 int sum=0, mul=1 ,k , c[n][m];
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            //mul= (a[i][j])*(b[j][i]);
            for(k=0;k<m;k++){
               sum+=((a[i][k])*(b[k][j]));
            }
            c[i][j]=sum;
            printf("c[%d][%d]=%d",i,j,c[i][j]);
            printf("\n");
            sum=0;
         }
    }
}  
