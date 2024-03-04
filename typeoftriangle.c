#include<stdio.h>
#include<math.h>
void main(){
int a,b,c;
printf("Enter the 3 sides of Triangle abc: ");
scanf("%d %d %d",&a,&b,&c);
if((pow(a,2)==pow(b,2)+(c*c))||(c*c==b*b+a*a)||(b*b==a*a+c*c)){
    printf("Triangle abc is Right angle Triangle");
}else if(a==b && b==c){
    printf("Triangle abc is an Equilateral Triangle");
}else if( a==b || b==c || c==a){
    printf("Triangle abc is an Isosceles Triangle");
}else{
    printf("The Triangle abc is Scalene Triangle");
 }
}