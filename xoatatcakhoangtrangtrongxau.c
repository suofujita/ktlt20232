#include <stdio.h>
#include <string.h>
int main() {
	char s[100], tmp[100];
	gets(s);
	int i, n=strlen(s),index=0;
	for(i=0;i<n;i++)
        if(s[i]==' ') continue;
        else {
            tmp[index++]=s[i];
        }
    tmp[index]='\0';
    puts(tmp);
}


