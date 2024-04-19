#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "c:\MinGW\bin";
    initgraph(&gd, &gm, data);

    circle(200, 200, 50);

    setcolor(4);
    // rectangle(100, 300, 300, 300);
    rectangle(350, 350, 100, 100);

    setbkcolor(9);
    circle(100, 500, 30);

    outtextxy(100, 700, "Press any key to change:");
    setbkcolor(12);

    getch();
    cleardevice();

    ellipse(100, 100, 0, 120, 80, 50);
    setcolor(3);
    fillellipse(100, 200, 80, 40);

    getch();
    closegraph();
    return (0);
}