#include<stdio.h>
int add(int a,int b){
   return a+b;
}
void main(){
    int a,b;
    int sum;
    scanf("%d",&a);
    scanf("%d",&b);
    //sum=add(a,b); (aa rite pn kari saki)
    //printf("%d",sum);
    printf("%d",add(a,b));
}
