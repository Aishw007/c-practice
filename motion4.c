#include<stdio.h>
#include<math.h>
float main(){
    float H,b,p;
    printf("enter a value :\n");
    scanf("%f %f",&b,&p);
    H=sqrt(b*b+p*p);
    printf("the value of H is %f",H);
    return 0;
}