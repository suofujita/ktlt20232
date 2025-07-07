#include <stdio.h>
#include <string.h>
struct date {
    int ngay, thang, nam;
};

struct time {
    int gio, phut, giay;
};

struct veXemPhim {
    struct date ngayXem;
    struct time gioXem;
};

int main(){
    // tao bien
   struct veXemPhim v;
   // truy cap tu tu
   // gan gia tri
   v.ngayXem.ngay = 25;
   v.ngayXem.thang = 12;
   v.ngayXem.nam = 2024;
   v.gioXem.gio = 18;
   v.gioXem.phut = 00;
   v.gioXem.giay = 00;
   printf("%d-%d-%d %d:%d:%d", v.ngayXem.ngay,v.ngayXem.thang,v.ngayXem.nam,v.gioXem.gio,v.gioXem.phut,v.gioXem.giay);



    return 0;
}

