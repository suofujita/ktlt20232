#include <stdio.h>
#include <math.h>
#define VAT 0.1

#define cBac1	1728
#define cBac2	1786
#define cBac3	2074
#define cBac4	2612
#define	cBac5	2919
#define	cBac6	3015

#define mBac1	1728
#define mBac2	2074
#define mBac3	2612
#define mBac4	3111
#define mBac5	3457

float tienDienCu(int n) {
	if(n>=401) 		return (cBac1*50 + cBac2*50 + cBac3*100 + cBac4*100 + cBac5*100 + cBac6*(n-400))*(1+VAT);
	else if(n>=301) return (cBac1*50 + cBac2*50 + cBac3*100 + cBac4*100 + cBac5*(n-300))*(1+VAT);
	else if(n>=201) return (cBac1*50 + cBac2*50 + cBac3*100 + cBac4*(n-200))*(1+VAT);
	else if(n>=101) return (cBac1*50 + cBac2*50 + cBac3*(n-100))*(1+VAT);
	else if(n>=51) 	return (cBac1*50 + cBac2*(n-50))*(1+VAT);
	else 			return 	cBac1*n*(1+VAT);
}
float tienDienMoi (int n) {
	if(n>=701) 		return (mBac1*100 + mBac2*100 + mBac3*200 + mBac4*300 + mBac5*(n-700))*(1+VAT);
	else if(n>=401) return (mBac1*100 + mBac2*100 + mBac3*200 + mBac4*(n-400))*(1+VAT);
	else if(n>=201) return (mBac1*100 + mBac2*100 + mBac3*(n-200))*(1+VAT);
	else if(n>=101) return (mBac1*100 + mBac2*(n-100))*(1+VAT);
	else 			return mBac1*n*(1+VAT);
}

int main() {
	int soDien;
	do {
	printf("Nhap so kwh dien tieu thu cua ho (la so nguyen): ");
	scanf("%d", &soDien);
	} while(soDien<0);

	printf("Tien dien moi %.2f dong\n", tienDienMoi(soDien));
	printf("Tien dien cu %.2f dong\n", tienDienCu(soDien));
	float chenhLech;
	chenhLech = tienDienMoi(soDien)-tienDienCu(soDien);
	if(chenhLech>0) {
        printf("Chenh lech gia moi va cu: %.2f > 0 \n", chenhLech);
        printf("Tien dien tang %.2f dong", chenhLech);
	}
	else if (chenhLech<0) {
        printf("Chenh lech gia moi va cu: %.2f < 0 \n", chenhLech);
        printf("Tien dien giam %.2f dong", fabs(chenhLech));
	}
	else printf("Tien dien khong doi");

	return 0;
}
