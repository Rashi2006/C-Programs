#include<stdio.h>
#include<string.h>
struct employee{
    char name[100];
    char work[100];
    float salary;
};
void main(){
     struct employee a[2];
     int i;
     for(i=0;i<2;i++){
        printf("Enter the employee %d details : ",(i+1));
        scanf("%s",a[i].name);
        scanf("%s",a[i].work);
        scanf("%f",&a[i].salary);
    }
}