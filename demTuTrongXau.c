#include <stdio.h>
#include <string.h>
int main() {
	char s[100],tmp[100][100],b[100][100];
	int hang = 0, cot=0;
	gets(s);
	int i;
	for(i=0;i<strlen(s);i++) {
        if(s[i]!=' ') {
            tmp[hang][cot++]=s[i];
        }
        else {
            tmp[hang][cot]='\0';
            hang++;
            cot=0;
        }
	}
	tmp[hang][cot]='\0';
	int count=0;
	for(i=0;i<=hang;i++) {
        if(strlen(tmp[i])!=0) {
            strcpy(b[count],tmp[i]);
            count++;
        }
	}
	printf("%d", count);




}

