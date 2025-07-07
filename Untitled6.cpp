// Viết lớp Fraction (phân số) với những phương thức cần thiết
#include <iostream>
#include<algorithm>
using namespace std;

class phanso {
	int tuso, mauso;
public:
    void nhap(int t, int m) { tuso = t; mauso = m; };
	phanso rutgon(phanso p);
	void cong(phanso);
	void tru(phanso);
	void nhan(phanso);
	void chia(phanso);
	void xuat(phanso);
};

phanso phanso::rutgon(phanso p) {
     phanso tmp;
	 tmp.tuso = p.tuso/__gcd(p.tuso, p.mauso);
	 tmp.mauso = p.mauso/__gcd(p.tuso, p.mauso);
     return tmp;
}

void phanso::cong(phanso p) {
	 phanso tmp;
	 tmp.tuso = tuso*p.mauso + p.tuso*mauso;
	 tmp.mauso = mauso*p.mauso;
	 tmp = rutgon(tmp);
	 cout << tmp.tuso << "/" << tmp.mauso << endl;
}

void phanso::tru(phanso p) {
	 phanso tmp;
	 tmp.tuso = tuso*p.mauso - p.tuso*mauso;
	 tmp.mauso = mauso*p.mauso;
	 tmp = rutgon(tmp);
	 cout << tmp.tuso << "/" << tmp.mauso << endl;
}

void phanso::nhan(phanso p) {
	 phanso tmp;
	 tmp.tuso = tuso*p.tuso;
	 tmp.mauso = mauso*p.mauso;
	 tmp = rutgon(tmp);
	 cout << tmp.tuso << "/" << tmp.mauso << endl;
}

void phanso::chia(phanso p) {
	 phanso tmp;
	 tmp.tuso = tuso*p.mauso;
	 tmp.mauso = mauso*p.tuso;
	 tmp = rutgon(tmp);
	 cout << tmp.tuso << "/" << tmp.mauso << endl;
}

void phanso::xuat(phanso p) {
    cout << p.tuso << "/" << p.mauso << endl;
}


int main() {
	phanso a,b,c;
	a.nhap(5,10);
	b.nhap(6,9);
	a.cong(b);
	a.tru(b);
	b.tru(a);
	a.nhan(b);
	a.chia(b);
	b.chia(a);
	return 0;
}
