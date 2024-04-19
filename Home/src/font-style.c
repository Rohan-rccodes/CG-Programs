#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    int gd = DETECT, gm;
    int x, y, font;

    char data[] = "c:\MinGW\bin";

    initgraph(&gd, &gm, data);

    x = 25;
    y = 50;

    for (font; font <= 10; font++)
    {
        delay(100);
        settextstyle(font, 0, 5);
        outtextxy(x, y, "RCCOCES");
        y = y + 40;
    }

    getch();
    closegraph();
    return (0);
}