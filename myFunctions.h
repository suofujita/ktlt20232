#ifndef MYFUNCTIONS_H_INCLUDED
#define MYFUNCTIONS_H_INCLUDED

void inMaTran(int arr[100][100], int h,int c) {
    int i,j;
    for (i = 0;i < h ;i++) {
        for (j = 0;j < c;j++) {
            printf("%5d", arr[i][j]);
        }
        // khong duoc quen xuong dong
        printf("\n");
    }
}
int nhapHangHopLe() {
    int m;
    do {
        printf("Nhap so hang tu 1..100: ");
        scanf("%d", &m);
    } while ((m < 1) || (m > 100));
    return m;
}
int nhapCotHopLe() {
    int n;
    do {
        printf("Nhap so cot tu 1..100: ");
        scanf("%d", &n);
    } while ((n < 1) || (n > 100));
    return n;
}
// hoan vi su dung con tro
void swag(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}




#endif // MYFUNCTIONS_H_INCLUDED
