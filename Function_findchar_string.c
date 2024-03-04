#include<stdio.h>
#include<string.h>
void main(){
   char a[100],r; 
    int i,p;
    printf("Enter s1 ");
    gets(a);
    p=strlen(a);
    //printf("%d",p);
    printf("Enter the char:");
    scanf("%c",&r);
    for(i=0;i<=p;i++){
        if(a[i]==r){
            printf("char[%d]=%c",i,r);
            break;
        }
    }
}