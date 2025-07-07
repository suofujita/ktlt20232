#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count(char s[]){
    int dem = 0, n = strlen(s);
    for(int i = 0; i < n; i++){
        //Đây là 1 từ mới
        if(s[i] != ' '){
            ++dem;
            //Bỏ qua từ đó
            while(i < n && s[i] != ' '){
                ++i;
            }
        }
    }
    return dem;
}

int main(){
    char s[1000];
    gets(s);
    printf("So luong tu trong xau : %d\n", count(s));
    return 0;
}
