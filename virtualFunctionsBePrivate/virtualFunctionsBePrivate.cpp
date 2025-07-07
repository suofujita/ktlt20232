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
        cout << "print() called on derived class\n";
    }
};

int main()
{
    cout << "printing with base class pointer\n";  // printing with base class pointer
    base* b_ptr = new derived();

    b_ptr->show(); // show() called on base class
    b_ptr->print();

    delete b_ptr;
}
