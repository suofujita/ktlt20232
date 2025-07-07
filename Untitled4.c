#include <stdio.h>
#define MAX 50
#define MAXTRON 100
void swag(float* a, float* b) {
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    float a[MAX], b[MAX], c[MAXTRON];
    int i, j, n1, n2, tg;

    printf("So phan tu mang A: ");
    scanf("%d", &n1);
    printf("Nhap du lieu mang A: \n");
    for (i = 0;i < n1;i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
        while ((i > 0) && (a[i] < a[i - 1])) {
            printf("Nhap so lon hon so truoc\na[%d] = ", i);
            scanf("%f", &a[i]);
        }
    }

    printf("So phan tu mang B: ");
    scanf("%d", &n2);
    for (i = 0;i < n2;i++) {
        printf("b[%d] = ", i);
        scanf("%f", &b[i]);
        while ((i > 0) && (b[i] < b[i - 1])) {
            printf("Nhap so lon hon so truoc\nb[%d] = ", i);
            scanf("%f", &b[i]);
        }
    }

    tg = n1 + n2;

    // tron mang A voi mang B
    j = 0;
    for (i = 0;i < tg;i++) {
        if (i < n1) c[i] = a[i];
        if (i >= n1) {
            c[i] = b[j];
            j++;
        }
    }

    // sap xep mang C tang dan
    for (i = 0;i < (tg - 1);i++) {
        for (j = 0;j < (tg - 1);j++) {
            if (c[j] > c[j + 1])
                swag(&c[j], &c[j + 1]);
        }
    }

    // mang can tim
    printf("Mang tron sap xep theo thu tu tang dan: \n");
    for (i = 0;i < tg;i++) {
        printf("%.0f ", c[i]);
    }

    return 0;
}
