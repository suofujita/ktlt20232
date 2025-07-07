#include <stdio.h>
#include <string.h>
#define MAXHS 100
#define MAXLEN 30
int main() {
    int i, j, count = 0;
    char ds[MAXHS][MAXLEN];
    char* ptr[MAXHS], *tmp;
    while (count < MAXHS) {
        printf("Vao hoc sinh thu : %d ", count + 1);
        gets(ds[count]);
        if (strlen(ds[count]) == 0) break;
        ptr[count] = ds + count;
        ++count;
    }
    // so sanh 1 phan tu truoc voi cac phan tu lien ke sau
    for (i = 0;i < (count-1);i++)
        for(j=i+1;j<count;j++)
            // dung con tro de hoan doi vi tri
            if (strcmp(ptr[i], ptr[j]) > 0) {
                tmp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = tmp;
            }
    // i chay tu 0 - (count-1) = count phan tu
    for (i = 0;i < count;i++) {
        printf("\n %d : %s", i + 1, ptr[i]);
    }

    return 0;
}



