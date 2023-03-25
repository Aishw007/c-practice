#include<stdio.h>
int main(){
    int x=10;
    int y=28;
    int a=30;
    int b=38;
    if(x<y && a==b){
        printf("x is less than y AND a is equal to b\n");
    }
    if(x<y || a==b){
        printf("x is less than y OR a is equal to b\n");
    }
    if(!x){
        printf("x is zero");
    }
    return 0;
}