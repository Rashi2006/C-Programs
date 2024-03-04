#include<stdio.h>
#include<string.h>
void main(){
    char a[100],r,d; 
    int i,p;
    printf("Enter s1 ");
    gets(a);
    p=strlen(a);
    //printf("%d",p);
    printf("Enter the char to be replaced:");
    scanf("%c",&r);
    printf("Enter the char:");
    scanf(" %c",&d);
    for(i=0;i<=p;i++){
        if(a[i]==r){
             a[i]=d;
        }
    }
    printf("\n %s",a);
}