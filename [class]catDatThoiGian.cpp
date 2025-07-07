#include <iostream>

class Time {
	int hour, minute, second;
	// su dung ham tao de tao gia tri mac dinh
public:
    Time() {
		hour = 7;
		minute = 5;
		second = 30;
	}
	void setTime(int h, int m, int s);
	void showTime();
};

void Time::setTime (int h, int m, int s) {
	hour = h;
	minute = m;
	second = s;
}

void Time::showTime() {
	std::cout << "Thoi gian la: " << hour << ":" << minute << ":" << second << std::endl;
}

int main() {
	Time a,b,c;
	b.setTime(12,10,16);
	c.setTime(4,1,20);

	a.showTime();
	b.showTime();
	c.showTime();

	return 0;
}
