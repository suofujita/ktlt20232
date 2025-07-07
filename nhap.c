#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// bai toan xoay trai

int main() {
    int n;
    int i,j=0,k;
    scanf("%d %d", &n, &k);

    int *a = (int*)malloc(n*sizeof(int));
    int *b = (int*)malloc(k*sizeof(int));

    k = k%n;
    // nhap mang
    for(i=0;i<n;i++)
        scanf("%d", a+i);

    // copy k phan tu dau tien
    for(i=0;i<k;i++)
        b[i]=a[i];
    // dich phan tu tu phan tu thu k ve ben trai
    for(i=0;i<n-k;i++)
        a[i] = a[i+k];
    // chen phan tu mang b vao cuoi
    for(i=n-k;i<n;i++)
        a[i] = b[j++];
    // in mang can tim
    for(i=0;i<n;i++)
        printf("%d ", a[i]);
    free(a);
    free(b);
    return 0;
}
