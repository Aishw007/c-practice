#include<stdio.h>
int main(){
    int i=0,n,arr[20];
    printf("enter number:");
    scanf("%d",&n);
    printf("\nenter the elements:");
    for(i=0;i<n;i++){
        printf("\narr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("\nthe array elements are\n");
    for(i=0;i<n;i++)
       printf("arr[%d]=%d\t",i,arr[i]);
       return 0;
}