#ifndef PHANSO_H
#define PHANSO_H

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


#endif // PHANSO_H
