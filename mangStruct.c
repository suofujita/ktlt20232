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


void timkiemSinhVien(sv a[],int n,char m[]) {
    int i;
    for(i=0;i<n;i++) {
        if(strcmp(m,a[i].mssv)==0) {
            inSinhVien(a[i]);
            return;
        }
    }
    printf("Khong co sinh vien tim kiem");
    }


int main(){
    sv a[100];
    // enter data
    int i,n;
    scanf("%d", &n);
    for (i=0;i<n;i++){
        printf("Sinh Vien thu %d: \n", i+1);
        nhapSinhVien(&a[i]);
    }
    // print data
    for (i=0;i<n;i++){
        inSinhVien(a[i]);
    }
    char m[20];
    printf("Nhap ma sinh vien tim kiem: "); scanf("%s", m);
    timkiemSinhVien(a,n,m);
    return 0;
}

