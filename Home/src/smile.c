#include <conio.h>
#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "c:\MinGW\bin";

    initgraph(&gd, &gm, data);

    setcolor(YELLOW);
    circle(300, 100, 50);

    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(300, 100, YELLOW);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);

    fillellipse(310, 85, 2, 9);
    fillellipse(290, 85, 2, 9);
    ellipse(300, 100, 205, 225, 20, 9);
    ellipse(300, 100, 205, 335, 20, 10);
    ellipse(300, 100, 205, 335, 20, 11);

    getch();
    closegraph();
    return (0);
}