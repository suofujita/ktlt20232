#include <iostream>
using namespace std;
class base {
public:

    base() { std::cout << "base class constructor\n"; }
    virtual ~base() {
        cout << "base class destructor\n";
    }
    void show() {
        cout << "show() called on base class\n";
    }
    virtual void print() {
        cout << "print() called on base class\n";
    }
};

class derived : public base {
public:
    derived() : base() {
        cout << "derived class constructor\n";
    }
    virtual ~derived() {
        cout << "derived class destructor\n";
    }

private:
    virtual void print()
    {
        std::cout << "print() called on derived class\n";
    }
};

int main()
{
    std::cout << "printing with base class pointer\n";
    base* b_ptr = new derived();
    b_ptr->show();
    b_ptr->print();
    delete b_ptr;
}
