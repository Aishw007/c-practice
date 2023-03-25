#include<stdio.h>
int main(){
    int a,b,c,d,i,x;
    int p = 1;
    int q = 1;
    int r = 1,s=1;
    scanf("%d",&x);
    scanf("%d %d %d",&a,&b,&c);
    for (i=1;i<=a;i++){
        p*=i;
    }
     for (i=1;i<=b;i++){
        q*=i;
     }
      for (i=1;i<=c;i++){
        r*=i;
     }
     printf("%d %d %d",p,q,r);
     return 0;  
}
  