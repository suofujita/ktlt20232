#include <stdio.h>
void solonnhat() {
	char ch;
	do {
		float a, b, c,max;
		printf("Nhap a,b,c: ");
		scanf("%f %f %f", &a, &b, &c);
		max = a;
		if (b > max)
			max = b;
		if (c > max)
			max = c;
		printf("max = %f", max);
		printf("\nTiep tuc? (y/n) ");
		scanf(" %c", &ch);
	} while (ch == 'y' || ch == 'Y');
}
int main(){
	solonnhat();
	return 0;
}
