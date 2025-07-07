#include <iostream>
using namespace std;

class hinhChuNhat {
	float chieuDai, chieuRong, dienTich, chuVi;
public:
	void nhap(float, float);
	void tinhDienTich(float, float);
	void tinhChuVi(float, float);
	void xuatKetQua();
};

void hinhChuNhat::nhap(float d, float r) : chieuDai(d), chieuRong(r) {};
void hinhChuNhat::tinhDienTich(float d, float r)  { dienTich = d*r;};
void hinhChuNhat::tinhChuVi(float d, float r) { chuVi = 2*(d+r); };
void hinhChuNhat::xuatKetQua() {
	cout << "Chieu dai: << chieuDai << endl;
	cout << "Chieu rong: << chieuRong << endl;
	cout << "Dien tich: << dienTich << endl;
	cout << "Chu vi: << chuVi << endl;
int main() {
	hinhChuNhat a;
	a.nhap(5,6);
	a.xuatKetQua();
	return 0;
}
