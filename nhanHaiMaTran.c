#include <stdio.h>
#include "C:\Users\acer\Desktop\upload git\myFunctions.h"

int main() {
    int a[100][100], b[100][100], multiple[100][100], m, n, q, p;
    int i, j, k;

    printf("Nhap so hang, cot ma tran A: \n");
    m = nhapHangHopLe();
    n = nhapCotHopLe();
    printf("Nhap so hang, cot ma tran B: \n");
    q = nhapHangHopLe();
    p = nhapCotHopLe();

    if (n != q) {
        printf("Phep nhan khong thuc hien duoc");
        return 0;
    }

    printf("Nhap du lieu ma tran A: \n");
    for (i = 0;i < m;i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Nhap du lieu ma tran B: \n");
    for (i = 0;i < q;i++) {
        for (j = 0; j < p; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Ma tran A: \n");
    inMaTran(a, m, n);
    printf("Ma tran B: \n");
    inMaTran(b, q, p);

    for (i = 0;i < m;i++) {
        for (j = 0;j < p;j++) {
            multiple[i][j] = 0;
            for (k = 0;k < n;k++) {
                multiple[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Ma tran C=AB: \n");
    for (i = 0;i < m;i++) {
        for (j = 0;j < p;j++) {
            printf("%5d", multiple[i][j]);
        }
        printf("\n");
    }
    return 0;
}
