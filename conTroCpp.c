#include <iostream>
using namespace std;
void main(){
    int a[3][2];
    int *pa = (int *)a;
    int i, j;
    for(i=0;i<3;i++) {
        for (j=0;j<2;j++) {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> *(pa+2*i+j);
        }
    }
    count << "\n";
    cout << a[2][1];
}


