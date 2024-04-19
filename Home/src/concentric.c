#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int x, y, radius = 20;
    char data[] = "c:\MinGW\bin";

    initgraph(&gd, &gm, data);

    x = getmaxx() / 2;
    y = getmaxy() / 2;

    circle(x, y, radius);

    getch();
    closegraph();
    return (0);
}