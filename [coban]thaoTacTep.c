#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    FILE *fptr1, *fptr2;
    int i;
    float f, a[10], b[10];
    char file_name_2[20];

    // Open the binary file for writing
    if((fptr1=fopen("C:\\Users\\acer\\Desktop\\float.dat","wb"))==NULL) {
        printf("\nKhong mo duoc file C:\\Users\\acer\\Desktop\\float.bin");
        printf("\nAn phim bat ki de ket thuc chuong trinh");
        return 0;
    }

    // Fill the array with calculated values
    for(i=0; i<10; i++) a[i] = (float)i;
    for(i=0; i<10; i++)
        fwrite(&a[i], sizeof(float),1, fptr1);
    fclose(fptr1);





}
