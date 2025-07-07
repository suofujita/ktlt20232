#include <iostream>
using namespace std;

class shape {
public:
    virtual void draw() {
        cout << "shape::draw\n";
    }
    void eraser() {
        cout << "shape::erase\n";
    }
    void redraw(){
        eraser(); draw();
    }
};

class Circle: public shape {
public:
    virtual void draw(){
        cout << "circle::draw\n";
    }
    void eraser() {
        cout << "circle::erase\n";
    }
};

int main(){
    Circle c;   // lop con
    shape s1 = c;    //lop me
    shape& s2 = c;   // lop me
    shape* s3 = &c;  //lop me

    c.eraser();  // circle::erase
    c.draw();   // circle::draw
    c.redraw(); // shape::erase circle::draw

    printf("\n");

    s1.eraser();  // shape::erase
    s1.draw();   //  shape::draw
    s1.redraw(); //  shape::erase shape::draw

    printf("\n");

    s2.eraser();  // shape::erase
    s2.draw();   //  circle::draw
    s2.redraw(); //  shape::erase circle::draw

    printf("\n");

    s3->eraser();  // shape::erase
    s3->draw();   //  circle::draw
    s3->redraw(); //  shape::erase circle::draw


}


