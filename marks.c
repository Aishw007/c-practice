#include<stdio.h>
int calcpercentage(int science,int maths,int sanskrit);
int main(){
    int science=99;
    int maths=98;
    int sanskrit=97;
    
    printf("percentage is:%d",calcpercentage(science,maths,sanskrit));
    return 0;
}
int calcpercentage(int science,int maths,int sanskrit){
    return((sanskrit+maths+science)/3);
}