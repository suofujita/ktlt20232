#include <iostream>
class Time {
	int hour, minute, second;
public:
    Time() : hour(7), minute(5), second(30) {};
	Time (int h, int m, int s) : hour(h), minute(m), second(s) {};
	void showTime() {
        		std::cout << "Thoi gian la: " << hour << ":" << minute << ":" << second << std::endl;
	}
};

Time test(){

    return ;
}
int main() {
    	// copy b to c
	Time a, b(10,10,10);
    Time c(b);
	a.showTime();
	b.showTime();
	c.showTime();
	return 0;
}

