#include <stdio.h>
int main(){
	double a,b,c,m,n,p;
	double det,det1,det2;
	printf("Nhap cac he so: "); scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&m,&n,&p);
	det = a*n-b*m;
	det1 = c*n-b*p;
	det2 = a*p-c*m;
	int dk = (det1==0)&&(det2==0);
	if (det != 0) {
		printf("Nghiem duy nhat\n");
		printf("x = %.2lf\n",det1/det);
		printf("y = %.2lf\n",det2/det);
	}
	else  {
		if(dk) printf("Vo so nghiem");
		else printf("Vo nghiem");
	}
	return 0;

	
}
