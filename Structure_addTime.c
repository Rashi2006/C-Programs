#include<stdio.h>
struct time{
    int hr;
    int min;
    int sec;
};
void main(){
    int i;
    struct time t[2];
    for(i=0;i<2;i++){
        printf("Enter t%d :-",(i+1));
        printf("\nHour:");
        scanf("%d",&t[i].hr);
        printf("\nMinute:");
        scanf("%d",&t[i].min);
        printf("\nsecond:");
        scanf("%d",&t[i].sec);
    }
    int r=0,s=0,p=0;
    r=(t[0].sec)+(t[1].sec);
    if(r>=60){
        r=r-60;
        s=s+1;
    }
    s=s+(t[0].min)+(t[1].min);
    if(s>=60){
        s=s-60;
        p=p+1;
    }
    p=p+(t[0].hr)+(t[1].hr);
    printf("\nTotal time : %d:%d:%d",p,s,r);
    
    


}