#include <stdio.h>
#include <string.h>

int main(){
    FILE *fptr;
    char quocGia[31], xau[31];
    float tien, sum=0;
    int nam, n;

   // bo sung them du lieu vao cuoi file
   if((fptr=fopen("C:\\Users\\acer\\Desktop\\TAITRO.txt","at"))== NULL) {
        printf("Khong mo duoc tep");
        return 0;
    }
    gets(quocGia);
    while(strcmp(quocGia,"$$$") != 0) {
    scanf("%f", &tien);
    scanf("%d", &nam);
    fprintf(fptr, "\nten quoc gia %s; so tien %.2f, nam %d.", quocGia, tien, nam); fclose(fptr);
    gets(quocGia);
    }

    // in ra du lieu theo nam nhap
    do {
        printf("Nhap n: ");
        scanf("%d",&n);
    } while ((n<2000)||n>2024);
    if((fptr=fopen("C:\\Users\\acer\\Desktop\\TAITRO.txt","rt"))== NULL) {
        printf("Khong mo duoc tep");
        return 0;
    }
    while(fscanf(fptr,"ten quoc gia %30[^;]; so tien %f, nam %d.\n", quocGia, &tien, &nam) == 3) {
        if(nam==n) printf("%-30s%6.2f%10d\n", quocGia, tien, nam);
    }
    fclose(fptr);

    // tim dat nuoc va tong tien
    getchar();
    gets(xau);
    if((fptr=fopen("C:\\Users\\acer\\Desktop\\TAITRO.txt","rt"))== NULL) {
        printf("Khong mo duoc tep");
        return 0;
    }
    while(fscanf(fptr,"ten quoc gia %30[^;]; so tien %f, nam %d.\n", quocGia, &tien, &nam) == 3) {
        if(strcmp(quocGia,xau)==0) sum += tien;
    }
    fclose(fptr);
    if(sum>0) printf("%.2f", sum);
    else printf("KHONG TIM THAY");

}


