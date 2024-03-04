#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int age;
    float percentage;
};
void main(){
    int i;
    struct student s[5];
   
   for(i=0;i<5;i++)
   {
    printf("Name  %d = ",(i+1));
    scanf(" %s",s[i].name);
    printf("age = ");

    scanf(" %d",&s[i].age);
    printf("percentage = ");

    scanf(" %f",&s[i].percentage);

   }
    
 
}