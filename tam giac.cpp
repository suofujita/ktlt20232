/*cho 3 so a,b,c kiem tra xem co phai tam giac khong
neu dung thi la tam giac gi vuong can deu va tinh
dien tich tam giac*/
#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,S,p;
	printf("Nhap a,b,c: "); scanf("%lf %lf %lf",&a,&b,&c);
	int dk1 = (a>0)&&(b>0)&&(c>0)&&(a<b+c)&&(b<a+c)&&(c<a+b);
	int dk2 = ((a==b)&&(a!=c))||((b==c)&&(b!=a))||((c==a)&&(c!=b));
	int dk3 = (a==b)&&(b==c)&&(c==a);
	int dk4 = (a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b);
	if(dk1)
	{
		printf("Ba canh 1 tam giac\n");
		if(dk2)
			printf("Tam giac can\n");
		 else if (dk3)
			printf("Tam giac deu\n");
		else if (dk4)
			printf("Tam giac vuong\n");
		else
			printf("Tam giac thuong\n");
		p = (a+b+c)/2;
		S = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Dien tich = %.2lf",S);
	} else
		printf("Khong phai 3 canh tam giac");

	return 0;
}

