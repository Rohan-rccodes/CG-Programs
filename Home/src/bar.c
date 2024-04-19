#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "c:\MinnGW\bin";

    initgraph(&gd, &gm, data);

    outtextxy(50, 30, "Reactnagle :");
    rectangle(50, 50, 100, 100);

    outtextxy(50, 130, "Bar : ");
    bar(50, 150, 200, 200);
    getch();
    closegraph();
    return (0);
}