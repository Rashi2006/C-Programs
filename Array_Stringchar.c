#include<stdio.h>

void main(){
    char S1[100];
    printf("enter the string");
    gets(S1);
    printf("%s",S1);
    int i,count=0;
    for(i=0;S1[i]!='\0';i++){
       count++;
    }
    printf("\nLength of String=%d",count);
}