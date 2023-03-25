#include<stdio.h>  // without using temporary variables
 int main()    
{    
int a,b;      
printf("enter first value : ");
scanf("%d",&a);
printf("enter second value : ");
scanf("%d",&b);
a=a-b;  
b=a+b;    
a=b-a;    
printf("swapped values= %d \n%d",a,b);    
return 0;  
}   