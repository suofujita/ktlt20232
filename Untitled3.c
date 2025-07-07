#include <stdio.h>
#include <stdlib.h>


int main()
{
	int N, i;
	float* p = NULL, *p2;
	char c = 'y';

	for (N=1; c!='n'; N++) {
		/* Mở rộng mảng p */
		p2 = (float*)malloc(N*sizeof(float)); /* Cấp phát vùng nhớ mới */

		if (p!=NULL) {
			/* Copy dữ liệu cũ sang vùng nhớ mới */
			for (i=0; i<N-1; i++)
				p2[i] = p[i];
			free(p);   /* Giải phóng vùng nhớ cũ */
		}

		/* p trỏ sang vùng nhớ mới */
		p = p2;
		/* Kết thúc mở rộng mảng p */

		printf("Nhap phan tu thu %d: ", N);
		scanf("%f", &p[N-1]);

		printf("Ban co muon nhap nua khong (y/n): ");
		fflush(stdin);
		scanf("%c", &c);
	}
	N--;

	printf("Mang ban da nhap: ");
	for (i=0; i<N; i++)
		printf("%.3f ", p[i]);

	free(p);
	return 0;
}

