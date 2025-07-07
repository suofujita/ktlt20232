#include "phanso.h"
#include <iostream>
#include <algorithm>
using namespace std;

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
