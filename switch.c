#include<stdio.h>
#include<math.h>
int main() {
    int day;
    printf("Enter day(1-7):");
    scanf("%d",&day);
    switch(day) {
        case1:printf("monday\n");
        break;
        case2:printf("tuesday\n");
        break;
        case3:printf("wednesday\n");
        break;
        case4:printf("thursday\n");
        break;
        case5:printf("friday\n");
        break;
        case6:printf("saturday\n");
        break;
        case7:printf("sunday\n");
        break;
        default:printf("not a valid day!\n");
    }
    return 0;
}