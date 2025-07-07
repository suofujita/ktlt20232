#include <stdio.h>

int nhapmang(int a[]) {
	int n;
	printf("So phan tu mang: ");
	scanf("%d",&n);
	// kiem tra kich thuoc mang hop le
	if ((n<=0)||(n>100)) {
		return -1;
	}
	printf("Nhap mang: ");
	for (int i = 0; i<n; i++)
		scanf("%d", &a[i]);
	return n;
}
int main(){
	int a[100]; int i,n;
	n = nhapmang(a);
	if (n>0)
	printf("%d",n);
	else printf("ERROR!");
	return 0;

}
