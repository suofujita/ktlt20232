/*cho 3 so a,b,c tim max*/
#include <stdio.h>
int main(){
	float a,b,c,max;
	char ch;
	do {
	printf("Nhap a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	max = a;
	if(b>max)
		max=b;
	if(c>max)
		max = c;
	printf("max = %f",max);
	printf("\nTiep tuc? (y/n) ");
	scanf(" %c",&ch);
    } while(ch=='y'||ch=='Y');
	return 0;
	
	
}
