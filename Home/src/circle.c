#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";

    initgraph(&gd, &gm, data);

    outtextxy(50, 50, "Circle : \n");
    circle(150, 150, 50);

    getch();
    closegraph();

    return 0;
}