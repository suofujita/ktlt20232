#include <stdio.h>
#define MAX 100
int main(){
    char s1[MAX], s2[MAX];
    printf("Nhap chuoi s1: ");
    gets(s1);

    int i,len=0;
    for(i=0;s1[i]!='\0';i++){
        len++;
    }
    for(i=0;i<len;i++)
        s2[i]=s1[i];
    s2[i]='\0';
    printf("Chuoi s2: ");
    puts(s2);
    return 0;
}
