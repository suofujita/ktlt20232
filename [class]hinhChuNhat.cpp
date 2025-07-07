#include <iostream>
using namespace std;

class hinhChuNhat {
	float chieuDai, chieuRong, dienTich, chuVi;
public:
	void tinhDienTich() { dienTich = chieuDai*chieuRong;};
	void tinhChuVi() { chuVi = 2*(chieuDai+chieuRong); }; // khong can tham so
	// them ham tao de goi

	hinhChuNhat(float d=0, float r=0) : chieuDai(d), chieuRong(r) {
        tinhDienTich(); tinhChuVi();
	};
	void xuatKetQua() {
	cout << "Chieu dai: " << chieuDai << endl;
	cout << "Chieu rong: " << chieuRong << endl;
	cout << "Dien tich: " << dienTich << endl;
	cout << "Chu vi: " << chuVi << endl;
	}
};

int main() {
	hinhChuNhat a(10,20);
	a.xuatKetQua();
	return 0;
}
