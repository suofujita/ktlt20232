#include <iostream>
using namespace std;

class myClass {
    int x;
    static int count;
public:
    void setX(int a) { x = a; };
    void printX() const { cout << x << endl; };
    static void printCount() { cout << count << endl;};
    static void incrementCount(){ count++; };
    myClass(int a=0) : x(a) {};
    ~myClass() { cout << "Goi ham huy"; };
};

int myClass::count = 0;

int main() {
	myClass myobj(5);
	return 0;
}
