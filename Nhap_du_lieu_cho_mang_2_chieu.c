#include <stdio.h>
int main() {
    int a[100][100],b[100][100],sum[100][100], h, c, i, j;

    do {
        printf("Nhap so hang tu 1..100: ");
        scanf("%d", &h);
    } while ((h < 1) || (h > 100));
    do {
        printf("Nhap so cot tu 1..100: ");
        scanf("%d", &c);
    } while ((c < 1) || (c > 100));

    printf("Nhap du lieu ma tan A: \n");
    for (i = 0;i < h;i++) {
        for (j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Nhap du lieu ma tran B: \n");
    for (i = 0;i < h;i++) {
        for (j = 0; j < c; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Ma tran A: \n");
    for (i = 0;i < h;i++) {
        for (j = 0;j < c;j++) {
            printf("%5d", a[i][j]);
        }
        // khong duoc quen xuong dong
        printf("\n");
    }
    printf("Ma tran B: \n");
    for (i = 0;i < h;i++) {
        for (j = 0;j < c;j++) {
            printf("%5d", b[i][j]);
        }
        // khong duoc quen xuong dong
        printf("\n");
    }

    // cong hai ma tran
    for (i=0;i<h;i++){
        for(j=0;j<c;j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("A + B = \n");
    for(i=0;i<h;i++){
        for(j=0;j<c;j++){
            printf("%5d", sum[i][j]);
        }
        printf("\n");
    }

    // tru 2 ma tran

        return 0;
}
