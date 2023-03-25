#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the range of number(Limit):");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n ", i * i);
        i++;
    }
    return 0;
}
// AND
#include <stdio.h>
int main()
{
    int n, i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n ", i * i);
    }
    return 0;
}