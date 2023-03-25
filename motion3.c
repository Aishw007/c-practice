#include<stdio.h>
#include<math.h>
float main(){
    float a,b,c,T;
    printf("enter a value :\n");
    scanf("%f %f %f",&a,&b,&c);
    T=2*a+sqrt(b+9*c);
    printf("the value of T is %f",T);
    return 0;
}