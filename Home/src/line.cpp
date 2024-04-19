#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\TurboC++\Disk\TurboC3\BIN");

    line(50, 50, 200, 50);

    getch();
    closegraph();

    return (0);
}