#include <stdio.h>
#include <string.h>
int main(){
    int i;
    for(i=0;i<256;i++) {
            printf("%d %c %o 0x%x\n",i,i,i,i);
    }
}

