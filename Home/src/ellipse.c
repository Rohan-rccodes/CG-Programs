#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";

    initgraph(&gd, &gm, data);

    ellipse(150, 150, 0, 360, 60, 40);

    getch();

    closegraph();

        return (0);
}