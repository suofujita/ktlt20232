#include <stdio.h>
#include <math.h>
double f(double x) {
    return pow(x,5)+ pow(x,0.2);

}
int main() {
	double a,b,c;
	scanf("%lf %lf %lf", &a,&b,&c);
	printf("%lf %lf %lf\n", a,b,c);
	printf("%lf", (f(a)+f(b)+f(c))/3);
	return 0;
}
