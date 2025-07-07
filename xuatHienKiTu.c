#include <stdio.h>
#include <string.h>
int main() {
	char s[100], t[100], tmp[100], kiTu[100];
	int count=0;
	int i,j, newSize=0;
	gets(s); gets(t);
	int len1 = strlen(s);
	int len2 = strlen(t);
	strcpy(tmp,s);
	strcat(tmp,t);
	kiTu[0]=tmp[0]; newSize++;
	for(i=1;i<len1+len2;i++) {
        for(j=0;j<newSize;j++)
            if(tmp[i]==kiTu[j]) break ;
        if(j==newSize) {
            kiTu[newSize] = tmp[i];
            newSize++;
        }
	}
	kiTu[newSize]='\0';
	// sap xep mang ki tu tru 1
	for(i=0;i<newSize-1;i++) {
        for(j=0;j<newSize-1;j++) {
            if(kiTu[j]>kiTu[j+1]) {
                char t;
                t = kiTu[j];
                kiTu[j]=kiTu[j+1];
                kiTu[j+1]=t;
            }
        }
	}
	puts(kiTu);

	printf("Chuoi 1:\n");
	for(i=0;i<newSize;i++) {
	    count = 0;
		for(j=0;j<len1;j++) {
            if(s[j]==kiTu[i]) count++;
		}
        printf("%c %d\n", kiTu[i], count);
	}

	printf("Chuoi 2:\n");
	for(i=0;i<newSize;i++) {
	    count = 0;
		for(j=0;j<len2;j++) {
            if(t[j]==kiTu[i]) count++;
		}
        printf("%c %d\n", kiTu[i], count);
	}
	return 0;
}
