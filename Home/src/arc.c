#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";

    initgraph(&gd, &gm, data);

    outstreamxy(50, 50, "Draw a CIRCULAR Arc : ");
    arc(100, 100, 0, 110, 50);

    getch();
    closegraph();

    return 0;
}