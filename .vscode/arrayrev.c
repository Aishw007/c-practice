#include<stdio.h>
int main(){
    int marks[4],temp;
    for(int i=0;i<4;i++){
        printf("enter the value of %d element of the array\n",i);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<4;i++){
        printf("the value of %d is %d\n",i,marks[i]);
    }
    for(int i=0;i<=4/2;i++){
        temp=marks[i];
        marks[i]=marks[3-i];
        marks[3-i]=temp;
    }
    for(int i=0;i<4;i++){
        printf("the value of %d is %d\n",i,marks[i]);
    }
    return 0;
}