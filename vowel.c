#include<stdio.h>
int main(){
    char alpha;
    printf("select an alphabet:\n");
    scanf("%c",&alpha);
    switch(alpha){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("vowel");
        break;
        default:
        printf("consonent");
        break;
    }
    return 0;
}
