
// a khai báo trong hàm
// tham so ra: a (return), n (truyen tham chieu)

#include <stdio.h>
#include <stdlib.h>

int* nhapmang(int *n){
	printf("Nhap n: ");
	scanf("%d",n);
	if ((*n<=0)||(*n>100))
		return NULL;
	int *p;
	p = (int*)malloc(*n*sizeof(int));
	if (p==NULL) {
		return NULL;
	}
	printf("Nhap mang: ");
	int i;
	for(i=0;i<*n;i++){
		scanf("%d",p+i);
	}
	return p;
}
int main(){
	int i,n=0;
	int *a=NULL;
	a = nhapmang(&n);
	
	if (a != NULL) {

	printf("So phan tu mang: %d\n",n);
	printf("Mang vua nhap: ");
	for(i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
	free(a);
	}
	else printf("error");
	return 0;
}
