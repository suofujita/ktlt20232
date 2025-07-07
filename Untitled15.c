#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char s[100], t[100];
    int count1[256]={0}, count2[256]={0};
    int i;
    gets(s); gets(t);
    for(i=0;i<strlen(s); i++) {
        count1[s[i]]=1;
    }

    for(i=0;i<strlen(t); i++) {
        count2[t[i]]=1;
    }
    for(i=0;i<256;i++) {
        if ((count1[i]>0)&&(count2[i]==0))
            printf("%c", i);
    }







	return 0;
}
