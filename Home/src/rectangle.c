#include <graphics.h>
#include <conio.h>

int main()
{

    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");

    // outtext("\t\t\n\nLine : ");
    outtexttxy( 50, 50, "\t\t\n\nRectangle : ");
    line(50, 50, 300, 50);

    outtexttxy( 50, 50, "\t\t\n\nRectangle : ");
    rectangle(50, 50, 100, 100);

    getch();
    closegraph();

    return (0);
}