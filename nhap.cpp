#include <iostream>
using namespace std;
int main(){
    int i,j,k, count_ = 0;
    for(i=0;i<=100;i++) {
        for(j=0;j<=100;j++)
            for(k=0;k<=100;k++) {
                int sum = i+j+k;
                if(sum==100) {count_++;
               // cout << count_ << " " << i << " " << j << " " << k << endl;
            }
            }
    }


    cout << count_;
}
