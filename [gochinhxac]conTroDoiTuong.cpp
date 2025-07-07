#include <iostream>
using namespace std;

class P_example {
		int number;
	public:
		void setNum(int val) {number = val; }
		void showNum() {
            cout << number << endl;
		};
};
int main() {
	P_example ob, *p;
	ob.setNum(1);
	ob.showNum();

	p = &ob;
	cout << "Ban dau ";
	p->showNum();
	// thay doi gia tri cua ob
	p->setNum(10);
	cout << "Sau do: ";
	p->showNum();
	ob.showNum();
	return 0;
}
