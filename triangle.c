#include<stdio.h>
#include<math.h>
int main(){
    int S,a,b,c,Area;
    printf("enter a value :\n");
    scanf("%d %d %d",&a,&b,&c);
    S=(a+b+c)/2;
    Area=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("area of triangle is %d",Area,S);
    return 0;
}