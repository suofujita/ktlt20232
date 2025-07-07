#include <stdio.h>

int main(){
	int i, j, n, a[100], b[100];
	int newSize = 0 ;
	printf("Nhap so luong phan tu N: ");
	scanf("%d", &n);
	printf("Nhap cac phan tu cua mang: ");
	for(i=0;i<n;i++) scanf("%d", a+i);

	b[0]=a[0]; newSize++;
	for(i=1;i<n;i++){
		for(j=0;j<newSize;j++)
			if(a[i]==b[j]) break;
		if(j==newSize) {
			b[newSize]=a[i];
			newSize++;
		}
	}

	for(i=0;i<newSize;i++) printf("%d ", b[i]);
}
