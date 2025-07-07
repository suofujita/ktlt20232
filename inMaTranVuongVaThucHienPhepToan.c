#include <stdio.h>
#define MAX 100
int main() {
    int n, i, j, a[MAX][MAX];
    printf("Cap ma tran vuong: "); scanf("%d", &n);
    printf("\nNhap du lieu: \n");
    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++) {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran vua nhap: \n");
    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }

    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++)
            *(*(a + i) + j) += 10;
    }
    printf("Cong 10 vao moi phan tu cua ma tran\nMa tran moi:\n");
    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }

    return 0;
}
