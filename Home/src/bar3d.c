#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "c:\MinGW\bin";

    initgraph(&gd, &gm, data);

    outtextxy(50, 30, "Reactnagle :");
    rectangle(50, 50, 100, 200);

    outtextxy(50, 130, "Bar : ");
    bar(50, 150, 200, 200);

    outtextxy(50, 300, "Bar3D : ");
    bar3d(50, 350, 200, 200, 20, 1);

    getch();
    closegraph();
    return (0);
}