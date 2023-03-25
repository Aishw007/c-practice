#include<stdio.h>
int main(){
    int marks[2][3];
    marks[0][0]=89;
    marks[0][1]=98;
    marks[0][2]=78;
    
    marks[1][0]=90;
    marks[1][1]=97;
    marks[1][2]=87;
    
    printf("%d\n",marks[0][0]);
    printf("%d\n",marks[0][2]);
    printf("%d\n",marks[0][1]);
    printf("%d\n",marks[1][0]);
    printf("%d\n",marks[1][1]);
    printf("%d\n",marks[1][2]);
}