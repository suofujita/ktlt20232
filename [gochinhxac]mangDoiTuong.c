#include <iostream>
using namespace std;
class Point {
	int x_, y_;
public:
	Point(int x, int y) { x_ = x; y_ = y; };
	int getx() { return x_};
	int gety() { return y_};
};

int main(){
	Point pArray[4] = { {1,2}, {10,20}, {5,6}, {100,200} };
	for (int i=0; i<4; i++) {
		cout << "(" << pArray[i].getx() << ", ";
		cout << pArray[i].gety() << ")" << endl;
	}
	return 0;
}
