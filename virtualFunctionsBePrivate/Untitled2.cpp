#include <iostream>
using namespace std;

class  Vect
{
protected:
    int Size;
    double *data;
public:
    Vect(): Size(0), data(NULL){}
    Vect(int sz): Size(sz) { data = new double[Size];}
    Vect (double *v, int sz): Size(sz), data(new double[sz]) {}
    Vect (int sz, const double *v)
    {
        Size = sz;
        data = new double[Size];
        for(int i=0;i<Size;i++)
            data[i]=v[i];
    }
    ~Vect() { if(data) delete[] data;}
public:
    int GetSize() {return Size; }
    double& operator [] (int index) { return data[index]; }
};

class Sort: public Vect
{
public:
    Sort(int sz, const double *v): Vect(sz,v) {}
protected:
    void Swap(int i, int j) {
        double t = data[i];
        data[i] = data[j];
        data[j] = t;
    }
    virtual Sort& DoSort() = 0;
    void Print(ostream& out) {
        for(int i=0;i < Size; i++)
            out << " " << data[i];
    }
    friend ostream& operator << (ostream& out, Sort& v) {
        out << "original:";
        v.Print(out);
        out << "\nsorted:";
        v.DoSort().Print(out);
        return (out);
    }
};

class SelectionSort: public Sort
{
public:
    SelectionSort(int sz, const double *v): Sort(sz, v) {}
private:
    Sort& DoSort()
    {
        for (int i = 0; i < Size - 1; i++) {
            int minIdx = i;
            for (int j = i + 1; j < Size; j++) {
                if (data[j] < data[minIdx]) {
                    minIdx = j;
                }
            }
            if (minIdx != i) {
                Swap(i, minIdx);
            }
        }
        return (*this);
    }
};
int main()
{
    double a[] = {1,3,5,2,4};
    cout << *new SelectionSort(4,a) << endl;
}
