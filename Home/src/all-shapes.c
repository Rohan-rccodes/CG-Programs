#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "c:\MinGW\bin";
    initgraph(&gd, &gm, data);

    outtextxy(30, 30, "All THE SHAPES:");

    rectangle(30, 60, 100, 100);

    circle(60, 150, 30);

    line(30, 200, 200, 200);

    rectangle(30, 350, 100, 450);

    getch();
    closegraph();
    return (0);
}