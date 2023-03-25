#include<stdio.h>
int main(){
    int n,m,i,j;
    printf("enter number of rows:\n");
    scanf("%d",&n);
    printf("enter number of columns:\n");
    scanf("%d",&m);
    int arra[m][n];
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&arra[i][j]);
        }
    }
    printf("\n");
    printf("transpose of the matrix:\n");
    for(j=1;j<=m;j++){
        for(i=1;i<=n;i++){
            printf("%d",arra[i][j]);
        }
        printf("\n");
    }
    printf("this is compeleted\n");
    return 0;
}