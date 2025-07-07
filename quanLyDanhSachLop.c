#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#define MAXHS 100
#define MAXLEN 30
#define BUTON 4
int main() {
    char ch;
    int i, j, count = 0;
    char ds[MAXHS][MAXLEN], tmp[30];
    int n;
    do {
        printf("Bat dau\n");
        printf("Ban muon lam gi?\n1 Bo sung\n2 Sap xep\n3 Xem\n4 Chinh sua\n");

        do {
            printf("Nhap so tu 1..%d\n",BUTON);
            scanf("%d", &n);

        } while ((n > BUTON) || (n < 1));

        getchar();

        if (n == 1) {
            printf("\nBo sung\n");
            while (count < MAXHS) {
                printf("Vao hoc sinh thu : %d ", count + 1);
                gets(ds[count]);
                if ((strlen(ds[count]) == 0) || (strlen(ds[count]) > MAXLEN)) break;
                count++;

            }
        }
        if (n == 2) {
            printf("\nSap xep\n");
            for (i = 0;i < (count - 1);i++) {
                for (j = i + 1;j < count;j++) {
                    if (strcmp(ds[i], ds[j]) > 0) {
                        strcpy(tmp, ds[i]);
                        strcpy(ds[i], ds[j]);
                        strcpy(ds[j], tmp);
                    }
                }
            }
            if (i == (count - 1)) printf("SUCCESS");
        }
        if (n == 3) {
            printf("\nXem\n");
            // i chay tu 0 - (count-1) = count phan tu
            for (i = 0;i < count;i++) {
                printf("\n %d : %s", i + 1, ds[i]);
            }
        }
        if (n == 4) {
            printf("\nChinh sua\nDanh sach lop:\n");
            for (i = 0;i < count;i++) {
                printf("\n %d : %s", i + 1, ds[i]);
            }
            int select;
            printf("\nVi tri can chinh: "); scanf_s("%d", &select);
            getchar();
            for (i = 0;i < count;i++) {
                if (i == (select-1)) {
                    printf("Nhap du lieu chinh sua: "); gets(tmp);
                    strcpy(ds[i], tmp);
                    break;
                }
            }
            printf("Du lieu moi: \n");
            for (i = 0;i < count;i++) {
                printf("\n %d : %s", i + 1, ds[i]);
            }
        }
        printf("\nTiep tuc? (y/n)"); scanf(" %c", &ch);

    } while ((ch == 'y') || (ch == 'Y'));

    return 0;
}



