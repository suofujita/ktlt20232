#include <stdio.h>
#include <math.h>
int main(){
	double x,y;
	printf("Nhap x: ");
	scanf("%lf",&x);
	if (x>=0) y=pow(5,x)+1;
	else
		y=(log(-x)+1)/(2*x);
	printf("y = %lf",y);
	return 0;
}
