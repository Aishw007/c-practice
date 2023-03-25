#include<stdio.h>
int main(){
    int bonus,salary,total;
    printf("enter salary:");
    scanf("%d",&salary);
    if(salary<=25000){
        bonus=salary*0.2;
        printf("bonus=%d",bonus);
        printf("\nsalary:%d",salary+bonus);
    }
    else if(salary<=50000){
        bonus=salary*0.5;
        printf("salary=%d",salary+bonus);
        printf("\nbonus:%d",bonus);
    }
    else if(salary<=100000){
        bonus=salary*0.1;
        printf("salary=%d",salary+bonus);
    }
    else{
        bonus=salary*0.05;
        printf("salary=%d",salary+bonus);
    }
    return 0;
}