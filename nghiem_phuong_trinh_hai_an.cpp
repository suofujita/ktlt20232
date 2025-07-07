#include <iostream>
using namespace std;

int gcd(int m,int n) {
    int r = m%n;
    while(r!=0) {
        m = n;
        n = r;
        r = m%n;
    }
    return n;
}
int main() {
    int i,j;
    int a = 1769, b = 551, r = gcd(a,b);

    for(i=-200;i<=200;i++)
        for(j=-200;j<=200;j++) {
            int temp = a*i+b*j;
            if(temp == r) {
                cout << "(" << i << ", " << j << ")" << endl;
            }
        }

}
