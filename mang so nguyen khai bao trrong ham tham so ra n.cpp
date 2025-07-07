#include <stdio.h>
#include <stdlib.h>
int nhapmang(int **a) {
	int i,n;
	printf("So phan tu: ");
	scanf("%d", &n);
	int *p;
	p = (int*)malloc(n*sizeof(int));
	printf("Nhap mang: ");
	for (i = 0; i<n; i++)
		scanf("%d",p+i);
		
	//
	*a = p;
	return n;
}
int main(){

	int *a = NULL; int i,n;
	n = nhapmang(&a);
	printf("%d\n",n);
	
	// in mang a
	for (i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
	free(a);
	return 0;
}
