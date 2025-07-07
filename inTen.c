// nhap vao ho ten in ra ten nguoi dung
#include <stdio.h>
#include <string.h>
int main() {
    char s[50], t[20];
    gets(s);
    int i, j=0;
    for(i = strlen(s)-1; s[i]!=' ';i--) {
        t[j] = s[i]; j++;
    }
    t[j]='\0';
    for (i=strlen(t)-1;i>=0;i--)
       printf("%c",t[i]);
}
