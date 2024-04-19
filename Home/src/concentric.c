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

    circle(x, y, radius + 0);
    circle(x, y, radius + 20);
    circle(x, y, radius + 40);
    circle(x, y, radius + 60);
    circle(x, y, radius + 80);
    circle(x, y, radius + 100);
    circle(x, y, radius + 120);
    circle(x, y, radius + 140);
    circle(x, y, radius + 160);

    getch();
    closegraph();
    return (0);
}