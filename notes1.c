#include<stdio.h>
int main(){
    int amount,hun,fif,ten,five,two,one,total;
    printf("enter the amount : ");
    scanf("%d",&amount);
    hun=amount/100;
    amount%=100;
    fif=amount/50;
    amount%=50;
    ten=amount/10;
    amount%=10;
    five=amount/5;
    amount%=5;
    two=amount/2;
    amount%=2;
    one=amount/1;
    amount%=1;
    total=hun+fif+ten+five+two+one;
    printf("largest number of notes=%d\n",total);
    return 0;
}