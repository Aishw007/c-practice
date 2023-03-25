#include<stdio.h>
int main(){
    int a,b;
    int num;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("enter num : ");
    scanf("%d",&num);
    switch(num){
        case 1:printf("sum is: %d\n",a+b);
        break;
        case 2:printf("subtraction is: %d\n",a-b);
        break;
        case 3:printf("multiplication is: %d\n",a*b);
        break;
        case 4:printf("division is: %d\n",a/b);
        break;
    }
    return 0;
}