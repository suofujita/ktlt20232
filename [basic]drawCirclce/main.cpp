#include <conio.h>
#include <graphics.h>
const int MAX_X=640, MAX_Y=480;
void main(){

    int driver=VGA, mode=VGAHI;
    initgraph(&driver, &mode, "");

    for(int x=0;x<MAX_X;x++)
        for(int y=0; y<MAX_Y; y++)
            if(!(x%10 || y%10)) putpixel(x,y, WHITE);
    getch();
    closegraph();
}
