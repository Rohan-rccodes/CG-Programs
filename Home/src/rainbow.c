#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    int gd = DETECT, gm;
    int x, y, radius = 20;

    char data[] = "c:\MinGW\bin";

    initgraph(&gd, &gm, data);

    x = getmaxx() / 2;
    y = getmaxy() / 2;

    for (radius; radius < 200; radius++)
    {
        delay(100);
        setcolor(radius / 10);
        arc(x, y, 0, 180, radius);
    }

    getch();
    closegraph();
    return (0);
}