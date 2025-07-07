#include <iostream>
#include <string.h>
using namespace std;

class nhansu {
	char* ho;
	char* ten;
	static int siso;
public:
	nhansu(const char*, const char*);
	~nhansu;
	static int xuatsiso();
};

int nhansu::siso = 0;

int nhansu::xuatsiso { return siso; };

nhansu::nhansu(const char* ho, const char* ten) {
	this->ho = new char[strlen(ho)+1];
	strcpy(this->ho, first);
	this->ten = new char[strlen(ten)+1];
	strcpy(this->ho, last);
	++siso;
	cout << "Ham tao duoc goi cho " << this->ho << " " << this->ten << "." << endl;
}

nhansu::~nhansu() {
	cout << "Ham huy duoc goi cho " << this->ho << " " << this->ten << "." << endl;
	delete[] ho;
	delete[] ten;
	--siso;
}

int main() {

	cout << "Si so ban dau: " << nhansu::xuatsiso() << endl;

	nhansu *ns1 = nhansu ("Nguyen Van", "An");
	nhansu *ns2 = nhansu("Tran Thi Thu", "Trang");

	cout << "Nhan su sau khi thiep lap" << nhansu::xuatsiso() << endl;

}
