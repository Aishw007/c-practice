#include<stdio.h>
int main(){
    int amt,a,b,c,d,e,f,g,h;
    printf("enter a amount:");
    scanf("%d",&amt);
    while(amt>=2000) {
        amt=amt-2000;
        a++;
    }
    printf("%d\n",a);
    while(amt>=500) {
        amt=amt-500;
        b++;
    }
    printf("%d\n",b);
    while(amt>=100) {
        amt=amt-100;
        c++;
    }
    printf("%d\n",c);
      while(amt>=50) {
        amt=amt-50;
        d++;
    }
    printf("%d\n",d);
    while(amt>=20) {
        amt=amt-20;
        e++;
    }
    printf("%d\n",e);
    while(amt>=10) {
        amt=amt-10;
        f++;
    }
    printf("%d\n",f);
    while(amt>=2) {
        amt=amt-2;
        g++;
    }
    printf("%d\n",g);
    while(amt>=1) {
        amt=amt-1;
        h++;
    }
    printf("%d\n",h);
}