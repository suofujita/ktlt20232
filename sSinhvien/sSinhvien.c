#include "sSinhvien.h"

// Cài đặt Hàm nhập dữ liệu cho mảng lưu dữ liệu cho sinh viên thuộc kiểu sSinhvien
/* your code here */

void nhapsSinhvien(sSinhvien sv[], int n) {
    int i;
    for(i=0;i<n;i++) {
        printf("MSSV: ");
        scanf("%s", sv[i].mssv);
        getchar();
        printf("Nhap ho ten: "); gets(sv[i].hoten);
        printf("Nhap diem trung binh: "); scanf("%f", &sv[i].cpa);
    }
}

// Cài đặt Hàm xuất dữ liệu ra màn hình cho một mảng lưu dữ liệu sinh viên thuộc kiểu sSinhvien
/* your code here */

void xuatsSinhvien(sSinhvien sv[], int n) {
    int i;
    for(i=0;i<n;i++)
        printf("%-s %-50s %-.2f\n", sv[i].mssv, sv[i].hoten, sv[i].cpa);
}

// Cài đặt Hàm sắp xếp dữ liệu theo thứ tự giảm dần theo điểm trung bình cho mảng dữ liệu sinh viên thuộc kiểu sSinhvien
/* your code here */
void sapXepsSinhvien(sSinhvien sv[],int n) {
    int i, j;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(sv[j].cpa<sv[j+1].cpa) {
                sSinhvien tmp;
                tmp = sv[j];
                sv[j] = sv[j+1];
                sv[j+1] = tmp;
            }
    xuatsSinhvien(sv,n);

}


