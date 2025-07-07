/*cho a,b,c co may so chia het cho 3, may so duong, may so am, may so duong chia het cho 3*/
#include <stdio.h>
#include <math.h>
int main(){
	double a[3];
	int i;
	printf("Nhap 3 so: ");
	for (i=0;i<3;i++) scanf("%lf",a+i);
	int dem_d=0, dem_a=0, dem3=0, dem3_d=0;

	for (i=0;i<3;i++){
	if(a[i]>0){
		dem_d += 1;
		if (fmod(a[i],3)==0) {
		dem3_d++; dem3++;
	}
	}
	else if(a[i]==0) dem3++;
	else {
		dem_a++;
		if(fmod(a[i],3)==0) dem3++;
	}
}
	printf("Co %d chia het cho 3\n",dem3);
	printf("Co %d so duong\n",dem_d);
	printf("Co %d so am\n",dem_a);
	printf("Co %d so duong chia het cho 3",dem3_d);
	return 0;

}
