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

lop::lop() : u(0), v(0) {};
lop::lop(int u) {
	this->u = u;
	v = 0;
}
lop::lop(double v, int u) {
	this->v = v;
	this->u = u;
}

lop::lop(int u, int v) {
    this->v = v;
	this->u = u;
}

void lop::xuat() {
	cout << "u = " << u << ", v = " << v << endl;
}

int main() {
	lop point1;
	point1.xuat();
	lop point2(2);
	point2.xuat();
	lop point3(2.5, 4);
	point3.xuat();
	lop point4(2, 4);
	point4.xuat();

	return 0;
}
