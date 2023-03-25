#include <stdio.h>

int main(){
    int hundred , ten , one , price;
    scanf("%d %d %d %d" , &hundred , &ten , &one , &price);
    if(hundred <0 || ten<0 || one<0 || price<0){
        printf("%d" ,0);
    }
    if(price < (hundred*100 + ten*10 + one*1)){
        printf("%d" , 1) ;
    }
    else{
        printf("%d" , 0);
    }
    return 0;
}
