#include<stdio.h>
int main(){
    int x,y;
    printf("enter 2 number\n");
    scanf("%d %d",&x,&y);
    if(x==y){
        printf("both variable are equal\n");
    }
    if(x>y){
        printf("x is greater than y\n");
    }
    if(x<y){
        printf("x is lesser than y\n");
    }
    if(x!=y){
        printf("x is not equal to y\n");
    }
    if(x<=y){
        printf("x is lesser or equal to y\n");
    }
    if(x>=y){
        printf("x is greater or equal to y\n");
    }
    return 0;
}