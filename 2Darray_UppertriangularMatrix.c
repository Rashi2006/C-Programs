#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter the no. of rows nd coloumn ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j<i){
                a[i][j]=0;
            }else{
                printf("a[%d][%d]=",i,j);
                scanf("%d",&a[i][j]);
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
       printf("\n");
    }
}