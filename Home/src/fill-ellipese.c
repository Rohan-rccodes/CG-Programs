#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    char data[] = "C:\MinGW\bin";

    initgraph(&gd, &gm, data);

    fillellipse(150, 150, 80, 50);
    fillellipse(150, 260, 80, 50);
    fillellipse(150, 380, 80, 50);

    getch();
    closegraph();

    return (0);
}