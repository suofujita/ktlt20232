#include <stdio.h>
#include <string.h>
int main(){
    char s[1000];
    gets(s);
    int i;
    for(i=0;i<strlen(s);i++) {
        if((s[i]>='A')&&(s[i]<='Z')) {
            s[i] = s[i]+'a'-'A';
        }
    }
    puts(s);
    return 0;

}
