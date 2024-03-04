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
    int count=0,flag=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==0){
                count++;
            }else{
                flag++;
            }
        }
    }
    if(count>flag){
        printf("Sprase Matrix");
    }else{
        printf("Not a Sprase Matrix");
    }
}