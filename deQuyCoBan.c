#include <stdio.h>

int deQuy(int n){
    if((n==1)||(n==2)) return 1;
    return 2*deQuy(n-1)+3*deQuy(n-2);
}

int main(){
    int n;
    do {
        scanf("%d", &n);
    } while(n<1);

    printf("%d", deQuy(n));
}

