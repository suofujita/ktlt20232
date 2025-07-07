#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class lop {
	int u;
	double v;
public:
	lop();
	lop(int);
	lop(int, int);
	lop(double, int);
	void xuat();
};

lop::lop() : u(0), v(0);
lop::lop(int u) {
	this->u = u;
	v = 0;
}
lop::lop(double v, int u) {
	this->v = v;
	this->u = u;
}

void lop::xuat() {
	cout << "u = " << u ", v = " << v << endl;
}

int main() {
	lop point;
	point.xuat();
	point(2);
	point.xuat();
	point(2.5, 4);
	point.xuat();
	return 0;
}
