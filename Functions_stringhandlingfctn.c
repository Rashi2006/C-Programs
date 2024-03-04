#include<stdio.h>
#include<string.h>
void main(){
    char a[100],b[100];
    printf("Enter s1 ");
    gets(a);
    printf("Enter s2 ");
    gets(b);
    //printf("strlen=%s , strcmp=%s ,strcpy=%s",strlen(a),strcmp(a,b),strcpy(a,b));
    printf(" strlen=%d ",strlen(a));
    printf(" strcat=%s ",strcat(a,b));
    printf("strlwr=%s , strupr=%s", strlwr(a),strupr(b));
    printf(" strrev=%s ",strrev(b));
    printf(" strcpy=%s ",strcpy(a,b));
    printf(" strcmp=%d",strcmp(a,b));
    //strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr()

}