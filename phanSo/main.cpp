#include "phanso.h"

int main() {
	phanso a,b,c;
	a.nhap(10,51);
	b.nhap(6,9);
	a.cong(b);
	a.tru(b);
	b.tru(a);
	a.nhan(b);
	a.chia(b);
	b.chia(a);
	return 0;
}
