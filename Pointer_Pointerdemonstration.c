#include<stdio.h>
void main(){
    int *r; 
    int x=1;
    r=&x;
    float *s;
    float y=1;
    s=&y;
    char *p;
    char z=1;
    p=&z;
    double *t;
    double u=1;
    t=&u;
    printf("%d %f %c %lf",*r,*s,*p,*t);
}