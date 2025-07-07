#include <iostream>
#include <cstring>
using namespace std;

class strCount
{
    int count;
    char* str;
    friend class String;
    strCount(char* s)
    {
        cout << "\nHam tao tham so trong class strCount";
        int length = strlen(s);
        str = new char[length+1];
        strcpy(str,s);
        count = 1;
    }
    ~strCount()
    {
        cout << "\nHam huy trong class strCount" << endl;
        delete[] str;
    }

};

class String
{
    strCount* psc;
public:
    String()
    {
        cout << "\nHam tao mac dinh trong class string";
        psc = new strCount("NULL");
    }
    String(char *s)
    {
        cout << "\nHam tao co tham so trong class string";
        psc = new strCount(s);
    }

    String (String &s)
    {
        cout << "\nHam tao sao chep class string";
        psc = s.psc;
        (psc->count)++;
    }

    ~String()
    {
        cout << "\nHam huy trong class string" ;
        if(psc->count==1)
            delete psc;
        else
            (psc->count)--;
    }

    void display()
    {
        cout << psc->str;
    }

    void operator = (String& s)
    {
        cout << "\nThuc hien qua tai gan";
        if(psc->count==1)
            delete psc;
        else
            (psc->count)--;
        psc = s.psc;
        (psc->count)++;
    }

    int getC() { return psc->count; }
};

int main()
{
    // output count = 3 chuoi giong nhau
    String s3 = "When the fox preaches, look to your geese";
    cout << "\ns3 = "; s3.display();
    cout << s3.getC();
   String s1;
   s1 = s3;
    cout << "\ns1 = "; s1.display();

  String s2(s3);
   cout << "\ns2 = "; s2.display();
   cout << endl;
    return 0;

}









