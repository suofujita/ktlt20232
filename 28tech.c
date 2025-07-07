#include <stdio.h>
#include <string.h>
int main() {
	char s[1000], ch;
	int i, count[256]={0}, max=0;
    gets(s);
	for(i=0;s[i]!='\0';i++) {
        count[s[i]]++;
	}


	for(i=0;i<256;i++) {
        if(count[i]>= max) {
                max = count[i];
                ch = (char)i;
        }
	}
/*
	int index=0, c[100];
	for(i=0;i<256;i++) {
        if(count[i]== max) {
            c[index++]= (char)i;
        }
	}

	char ch=c[0];
	for(i=1;i<index;i++) {
        if(c[i]> ch) ch = c[i];
	}*/
	printf("%c",ch);
}
