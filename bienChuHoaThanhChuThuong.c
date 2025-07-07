#include <stdio.h>
#define MAX 100
void bienChuHoaThanhThuong(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if((s[i]>='A')&&(s[i]<='Z'))
            s[i] += 'a'-'A';
        }
}
void bienChuThuongThanhHoa(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if((s[i]>='a')&&(s[i]<='z'))
            s[i] += 'A'-'a';
    }
}
int main(){
    char s[MAX];
    int i;
    printf("Nhap chuoi s: ");
    gets(s);
    bienChuThuongThanhHoa(s);
    printf("Chuoi s: ");
    puts(s);
    return 0;
}
