#include <stdio.h>
#include <string.h>
struct sinhVien {
    char mssv[20];
    char ten[50];
    double gpa;
};
typedef struct sinhVien sv;
int main(){
    sv a;
    // enter data
    scanf("%s", a.mssv);
    getchar();
    gets(a.ten);
    scanf("%lf", &a.gpa);
    // print a
    printf("%s %s %.2lf\n", a.mssv, a.ten, a.gpa);
    // copy data
    sv b;
    b=a;
    printf("%s %s %.2lf\n", b.mssv, b.ten, b.gpa);

    // size of struct
    printf("%d", sizeof(sv));

    return 0;
}
