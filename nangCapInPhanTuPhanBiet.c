#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int i;
    gets(s);
    int count[256]={0};
    for(i=0;s[i]!='\0';i++)
        count[s[i]]++;

    int sokitu=0;
    for(i=0;i<256;i++) {
        if(count[i]!=0) {
            sokitu++;
            printf("%c %d\n",i,count[i]);
    }
    }
    printf("So ki tu: %d", sokitu);

}
