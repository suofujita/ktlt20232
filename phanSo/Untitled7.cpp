#include <iostream>
using namespace std;
class Circle {
    static int count;
	float r;
	Circle() { count++; r = 0};
	Circle(float rr) { count++; r = rr; };
	Circle(Circle c) {
		count++;
		r = c.r; }
	~Circle() { count--; };
	static int getCount() { return count;};
	float dientich() { return r*r*3.14; };
	float chuvi() { return 2*3.14*r; };
	float getR() { return r;};
	void setR(float rr) { r = rr; }

};

int Circle::count = 0;

int main() {
	Circle c1;
	Circle c2 = c1;
	cout << Circle::count;

	return 0;

}
