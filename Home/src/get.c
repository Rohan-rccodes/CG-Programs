#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "c:\MinGW\bin";
    char str[100];

    initgraph(&gd, &gm, data);

    sprintf(str, "Current position x=%d & Y=%d", getx(), gety());

    outtext(str);

    sprintf(str, "Maximum value of x=%d & Y=%d", getmaxx(), getmaxy());
    outtextxy(100, 100, str);

    getch();
    closegraph();
    return (0);
}