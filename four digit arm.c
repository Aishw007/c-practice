#include<stdio.h>

#include<math.h>
int main(){
    int n,a,b,sum=0,c,d;
    printf("Enter your no.: ");
    scanf("%d",&a);
    d=a;
    c=a;
    while (a!=0)
    {
        a=a/10;
        n=n+1;
    }
    while (c!=0)
    {
        b=c%10;
        sum= sum + pow(b,n);
        c=c/10;
    }
    
    if (sum==d)
    {
        printf("%d is a armstrong no.",d);
    }
    else
    {
        printf("%d is not a armstrong no.",d);
    }
    
    return 0;
}