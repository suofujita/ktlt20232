#include <stdio.h>
#include <string.h>
#define MAX 30
#define MAX_LEN 100
int main(){
	char s[100],a[MAX][MAX_LEN],b[MAX][MAX_LEN];
	int chisohang = 0, chisocot = 0;
	gets(s);
	int len = strlen(s);
	int i;
	for(i=0;i<len;i++) {
		if (s[i] != ' ') {
			a[chisohang][chisocot++]= s[i];
		}
		else {
			a[chisohang][chisocot] = '\0';
			chisohang++;
            chisocot=0;
		}
	}
	// nho cau lenh nay de ket thuc xau cuoi cung
    a[chisohang][chisocot] = '\0';

	// loc xau rong
	int chisohangmoi=0;
	for(i=0;i<=chisohang;i++) {
            if(strlen(a[i])==0) continue;
            else {
                strcpy(b[chisohangmoi],a[i]);
                chisohangmoi++;
            }
	}
    // in mang ra
	for(i=0;i<chisohangmoi;i++) printf("%s ", b[i]);
    return 0;
}
