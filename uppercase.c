#include<stdio.h>
int main(){
    char ch;
    printf("enter any character in upper case:");
    scanf("%c",&ch);
    printf("the character in lower case is: %c",ch+32);
    return 0;
}