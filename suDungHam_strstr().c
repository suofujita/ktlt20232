#include <stdio.h>
#include <string.h>
int main(){
    char s[100], t[100];
    char *p;
    gets(s); gets(t);
    p = strstr(s,t);
    if(p==NULL) printf("Xau cha khong co xau con");
    else {
        puts(p);
        printf("Vi tri xuat hien: %d",p-s+1);
    }
}
