#include<stdio.h>
void main(){
    char temp;
    printf("Enter the Character:");
    scanf("%c",&temp);
if(temp>='A'&& temp<='Z'){
    printf("The given Character is in Uppercase.");
}else if(temp>='a' && temp<='z'){
    printf("The given Character is in Lowercase.");
}else if(temp>=48 && temp<=57){
    printf("The given Character is Digit.");
}else{
    printf("The given Character is Special Character.");
}
}