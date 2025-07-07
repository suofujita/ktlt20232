#include <stdio.h>
int main()
{
    char *seasons[4] = { "Winter",
                        "Spring",
                        "Summer",
                        "Fall"};
    for (int i=0;i<4;i++)
        printf("The season is %s\n", seasons[i]);
}
