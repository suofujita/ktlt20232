/*  1. Nhap mang 1 chieu co 10 phan tu
	2. Hien thi mang theo chieu ngang
	3. Tim min, max cua mang
	4. Dem so lan xuat hien min, max trong mang
	5. Tinh tong cac so o vi tri le cua mang */

#include <stdio.h>
int main {
	int a[10], max, min;
	int i;
	// yeu cau 1
	for(i=0;i<10;i++) {
		printf("a[%d] = ",i);
		scanf("%d", a+i);
	}
	// yeu cau 2
	for(i=0;i<10;i++) {
		printf("%d ",a[i]);
	}
	// yeu cau 3
	max = a[0];
	for (i=1;i<10;i++)
		if (a[i] > max) max = a[i];
	printf("\nMax = %d", max);
	min = a[0];
	for (i=1;i<10;i++)
		if(a[i]<min) min = a[i];
	printf("\nMin = %d", min);
	// yeu cau 4
	int countMax = 0; countMin = 0;
	for (i=0;i<10;i++) {
		if (a[i]==min) countMin++;
		if (a[i]==max) countMax++;
	}
	printf("\nSo lan xuat hien min trong mang: %d", countMin);
	printf("\nSo lan xuat hien max trong mang: %d", countMax);
	// yeu cau 5
	int sum=0;
	for(i=0;i<10;i++)
		if(i%2==0) sum += a[i];
	printf("\nTong cac so o vi tri le cua mang: %d", sum);

	return 0;
}

