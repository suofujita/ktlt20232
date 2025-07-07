#include <stdio.h>

int SONGUYENTO(int n) {
if (n < 2)
return 0;
for (int i = 2; i * i <= n; i++) {
if (n % i == 0)
return 0;
}
return 1;
}
int TIM_SNT_GANNHAT(int n) {
int lowerPrime = n - 1;
while (lowerPrime >= 2) {
if (SONGUYENTO(lowerPrime))
return lowerPrime;
lowerPrime--;
}
return -1; // Khong tim thay so nguyen to be hon n
}
int main() {
int n;
printf("Nhap mot so nguyen duong: ");
scanf("%d", &n);
if (SONGUYENTO(n)) {
printf("%d la so nguyen to.\n", n);
} else {


int nearestPrime = TIM_SNT_GANNHAT(n);
if (nearestPrime != -1) {
printf("%d khong la so nguyen to.\n", n);
printf("So nguyen to gan nhat va be hon %d la %d.\n", n,
nearestPrime);
} else {
printf("Khong tim thay so nguyen to be hon %d.\n", n);
}
}
return 0;
}
