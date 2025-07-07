/*Thông tin về giáo trình của một thư viện gồm có: tên giáo trình (là một xâu không quá 50 kí tự), nhà xuất bản
(là một xâu không quá 30 kí tự), năm xuất bản (là một số nguyên). Hãy viết chương trình C thực hiện các công
việc sau:
a) Định nghĩa cấu trúc lưu trữ thông tin về giáo trình. Nhập từ bàn phím thông tin về các giáo trình của thư
viện và lưu vào một mảng cấu trúc. Quá trình nhập kết thúc khi đã nhập 50 giáo trình hoặc khi nhập tên
giáo trình là xâu "###".

b) Duyệt lại mảng này, đưa ra màn hình tên các giáo trình do nhà xuất bản "Bach Khoa" xuất bản trước
năm 2012. Nếu không có thì hiển thị "Khong co giao trinh thoa man yeu cau tim kiem".*/


#include <stdio.h>
#include <string.h>
struct Giaotrinh {
    char tenGiaoTrinh[51];
    char nhaXuatBan[31];
    int namXuatBan;
};
typedef struct Giaotrinh Giaotrinh;

int main() {
    Giaotrinh gt[50];
    int i=0, count=0;

    gets(gt[i].tenGiaoTrinh);
    while((strcmp(gt[i].tenGiaoTrinh,"###") != 0)&&(count<=50)) {
        ++count;
        gets(gt[i].nhaXuatBan);
        scanf("%d", &gt[i].namXuatBan);
        i++;
        getchar();
        gets(gt[i].tenGiaoTrinh);
    }
    int dem=0;
    for(i=0;i<count;i++) {
        if((strcmp(gt[i].nhaXuatBan,"Bach Khoa")==0)&&(gt[i].namXuatBan<2012)) {
            printf("%s\n",gt[i].tenGiaoTrinh); dem++;
        }
    }
    if(dem==0) printf("Khong co giao trinh thoa man yeu cau tim kiem");
    return 0;
}


