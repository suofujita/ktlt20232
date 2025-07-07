#include <iostream>
#include <math.h>
using namespace std;

class cComplex {
	double real, img;
public:
	cComplex() : real(0), img(0) {};
	cComplex(double r, double i): real(r), img(i) {};
	const cComplex& add(const cComplex& c) {
		return cComplex(real + c.real, img + c.img);
	}

    cComplex sub(cComplex c) {
        return cComplex(real - c.real, img - c.img);
    }

    cComplex mul(cComplex c) {
        cComplex tmp;
        tmp.real = real*c.real - img*c.img;
        tmp.img = real*c.img + img*c.real;
        return tmp;
    }

    cComplex div(cComplex c) {
       cComplex tmp;
        tmp.real = (real*c.real + img*c.img)/(c.real*c.real + c.img*c.img);
        tmp.img = (- real*c.img + img*c.real)/(c.real*c.real + c.img*c.img);
        return tmp;
    }
	void showComplex() const;
};
void cComplex::showComplex() const {
	if(img>=0) cout << "So phuc: " << real << "+" << img << "i" << endl;
	else if (img<0) cout << "So phuc: " << real << img << "i" << endl;
}
int main(){

	cComplex c1(5,6), c2(-2,0);
	cComplex& c = c1.add(c2); // c tham chieu den doi tuong c1
	c.showComplex();
	return 0;
}
