#include <stdio.h>
double TIENDIEN(int sodien) {
	if (sodien<=100) return sodien*550;
	else if(sodien<=150) return 100*550+1000*(sodien-100);
	else return 100*550+1000*50+(sodien-150)*1500;
}
int main(){
	int i, j=0, N, sodien[40];
	double sum = 0, P[40];
	do {
		printf("Nhap vao so ho dan(khong lon hon 40): ");
		scanf("%d", &N);
	} while((N<0)||(N>40));
	for(i=0;i<N;i++) scanf("%d", sodien+i);
	for(i=0;i<N;i++) {
		P[j] = TIENDIEN(sodien[i]);
		sum += P[j];
		j++;
	}
	printf("%.2lf", sum);
}
