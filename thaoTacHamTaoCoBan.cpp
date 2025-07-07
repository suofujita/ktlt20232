// vi du nay tham khao trong giao trinh ky thuat lap trinh c++
#include <iostream>

class Point {
    int x_, y_;
public:
    Point(int a, int b); // ham tao co tham so
    void xuat();
};

// dinh nghia ham tao ngoai lop
Point::Point(int a, int b) {
    x_ = a;
    y_ = b;
}

void Point::xuat(){
    std::cout << "(" << x_ <<"," << y_ << ")" << std::endl;
}

int main(){
    Point x(10,20);
    Point y(0,0);
   // Point z;
    x.xuat();
    y.xuat();
}
