#include<stdio.h>//using conditional operator
int main(){
int a,b,c,big;
printf("Enter three numbers:\n");
scanf("%d %d %d",&a,&b,&c);
big=(a>b&&a>c?a:b>c?b:c);
printf("The biggest number is:%d\n",big);
return 0;
}