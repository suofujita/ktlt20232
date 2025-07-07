#include <stdio.h>
#include <string.h>
struct sinhVien {
    char mssv[20];
    char ten[50];
    double diem;
};
typedef struct sinhVien sv;

// xay dung ham nhap thong tin dung con tro
void nhapSinhVien (sv *a) {
    scanf("%s", a->mssv);
    getchar();
    gets(a->ten);
    scanf("%lf", &a->diem);
}
// xay dung ham in thong tin dung con tro
void inSinhVien(sv a){
    printf("%s %s %.2lf\n", a.mssv, a.ten, a.diem);
}
int main(){
    sv a;
    // enter data
    nhapSinhVien(&a);
    inSinhVien(a);
    return 0;
}
