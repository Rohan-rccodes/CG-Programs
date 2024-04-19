#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";

    initgraph(&gd, &gm, data);

    ellipse(50, 50, 0, 360, 20, 40);

    getch();

    closegraph();

        return (0);
}