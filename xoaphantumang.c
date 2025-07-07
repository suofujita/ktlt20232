#include <stdio.h>

void xoaPhanTu(int a[100],int *n, int k) {
    int i;
    for(i=k;i<*n-1;i++)
        a[i]=a[i+1];
    (*n)--;
}

int main(){

    int a[100];
    int i, n,k;
    scanf("%d %d", &n, &k);
    for(i=0;i<n;i++) scanf("%d", a+i);

    xoaPhanTu(a,&n,k);
    for(i=0;i<n;i++) printf("%d ", a[i]);
}

