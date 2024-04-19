#include <graphics.h>
#include <conio.h>

int main()
{

    int gd = DETECT, gm;
    char data[] = "c:\MinGW\bin";

    initgraph(&gd, &gm, data);

    setbkcolor(15);
    setcolor(BLUE);
    circle(100, 100, 30);
    circle(300, 100, 30);

    setcolor(RED);
    rectangle(200, 200, 50, 50);

    getch();
    closegraph();
    return (0);
}