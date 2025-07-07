#include <iostream>
using namespace std;

class cComplex {
	double real, img;
public:
	cComplex add(cComplex c) {
		cComplex tmp;
		tmp.real = real + c.real;
		tmp.img = img + c.img;
		return tmp;
	}
	cComplex(double r, double i) : real(r), img(i);
	double getReal() { return real; };
	double getImg() { return img; };
	void showComplex();
};

void cComplex::showComplex() {
	if(img>=0) cout << "So phuc: << real << "+" << img << "i" << endl;
	else if (img<0) cout << "So phuc: << real << img << "i" << endl;
}

int main(){
	cComplex c, c1(1,2.2), c2(-1,-2.3);
	c = c1.add(c2);
	c.showComplex();
	return 0;
}
