#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "c:\MinGW\bin";

    int points[] = {320, 150, 420, 300, 250, 300, 320, 150};
    int points2[] = {320, 150, 420, 300, 310, 280, 250, 300, 320, 150};

    initgraph(&gd, &gm, data);

    drawpoly(4, points);

    fillpoly(5, points2);
    getch();
    closegraph();
    return (0);
}