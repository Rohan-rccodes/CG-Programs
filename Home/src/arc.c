#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";

    initgraph(&gd, &gm, data);

    outtextxy(50, 50, "Draw a CIRCULAR Arc : ");
    arc(200, 200, 0, 110, 50);

    getch();

    closegraph();

    return (0);
}