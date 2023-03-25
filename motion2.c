#include<stdio.h>
int main(){
    int a,u,t,s;
    printf("enter the initial velocity : ");
    scanf("%d",&u);
    printf("enter the acc : ");
    scanf("%d",&a);
    printf("enter the time : ");
    scanf("%d",&t);
    s=u*t+0.5*a*t*t;
    printf("the displacement is=%d",s);
    return 0;
}