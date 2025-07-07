#include <iostream>
using namespace std;
class Circle {
    static int count;
	float r;
public:
	Circle() { count++; r = 0; };
	Circle(float rr) { count++; r = rr; };
	Circle(const Circle& c) {
		count++;
		r = c.r; }
	~Circle() { count--; cout << "Ham huy duoc goi" << endl;};
	static int getCount() { return count; };
	float dientich() { return r*r*3.14; };
	float chuvi() { return 2*3.14*r; };
	float getR() { return r;};
	void setR(float rr) { r = rr; }

};

int Circle::count = 0;

int main() {
	Circle c1; // goi ham tao mac dinh c1.getR() = 0;
	Circle c2 = c1;  // sao chep c1 vao c2 c2.getR()= 0;
	cout << Circle::getCount() << endl;
    // khong tao ra doi tuong moi, c3 la ten khac cua c2, khi thay doi c2 thi c3 thay doi theo va nguoc lai
	Circle& c3 = c2;
	// thay doi c3
	c3.setR(10.0);
	cout << c2.getR() << endl;
	// thay doi c2
	c2.setR(8);
	cout << c3.getR() << endl;

    // tao vung nho cho con tro doi tuong
    Circle *p = new Circle[10];
    cout << Circle::getCount() << endl;

    delete[] p;

    cout << Circle::getCount() << endl;

	return 0;

}
