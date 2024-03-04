#include<stdio.h>
void main(){
    char r;
    printf("enter the alphabet:");
    scanf("%c",&r);
    if(r=='a'|| r=='e'||r=='i'||r=='o'||r=='u'){
printf("the given alphabet is vowel.");
    }else{
        printf("the given alphabet is consonent.");
    }
    
}