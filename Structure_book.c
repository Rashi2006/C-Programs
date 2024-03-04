#include<stdio.h>
struct book{
    char title[500];
    char author[50];
    char publication[50];
    float price;
};
void main(){
    int i;
    struct book a[3];
    for(i=0;i<3;i++){
        printf("Enter the Title of the book %d:",(i+1));
        scanf("%s",a[i].title);
        printf("\nAuthor name:");
        scanf("%s",a[i].author);
        printf("Publication:");
        scanf("%s",a[i].publication);
        printf("Price:");
        scanf("%f",&a[i].price);
    }
    for(i=0;i<3;i++){
        printf("Book %d: %s %s %s %f ",(i+1),a[i].title,a[i].author,a[i].publication,a[i].price);
    }
}