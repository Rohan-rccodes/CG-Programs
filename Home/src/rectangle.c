#include <graphics.h>
#include <conio.h>

int main()
{

    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");

    // outtext("\t\t\n\nLine : ");
    outtextxy(50, 50, "Rectangle : ");
    line(150, 150, 300, 50);

    outtextxy(50, 50, "Rectangle : ");
    rectangle(350, 350, 100, 100);

    getch();
    closegraph();

    return (0);
}