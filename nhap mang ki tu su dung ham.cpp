#include <stdio.h>

void nhapmang(int a[], int n) {
	printf("Nhap mang: ");
	for (int i = 0; i<n; i++)
		scanf("%d", &a[i]);
}
int main(){
	int a[100]; int i,n;
	printf("So phan tu mang: ");
	scanf("%d", &n);
	
	// kiem tra kich thuoc mang hop le
	if ((n<=0)||(n>100)) {
		return 1;
	}
	
	nhapmang(a, n);
	
	printf("Mang vua nhap:");
	for(i=0;i<n;i++) {
		printf("%d ", a[i]);
	}
	return 0;
	
}
