#include <iostream>
using namespace std;
    static int count = 0;
class smallobj //define a class
{
private:
    int somedata; //class data
public:

    void setdata(int d) //member function to set data
        { somedata = d; }
    void showdata() //member function to display data
    { cout << "Data is " << somedata << endl; }
    ~smallobj(){ count++; cout << "su dung ham huy lan " << count << endl;}
};

int main()
{

    smallobj s1, s2; //define two objects of class smallobj
    s1.setdata(1066); //call member function to set data
    s2.setdata(1776);
    s1.showdata(); //call member function to display data
    s2.showdata();
    return 0;
}
