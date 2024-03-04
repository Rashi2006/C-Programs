#include<stdio.h>
void main(){
    int marks[20][1],i,j;
    for(i=0;i<20;i++){
        for(j=0;j<1;j++){
       printf("Roll no. %d=",(i+1));
       scanf("%d",&marks[i][j]);
    }
}
}