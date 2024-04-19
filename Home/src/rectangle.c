#include <graphics.h>
#include <conio.h>

int main()
{

    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\TurboC++\Disk\TurboC3\BIN");

        outtext("Line : ");

        line(50, 50, 300, 50);

        outtext("Rectangle : ");
        rectangle(50, 50, 100, 100);

            getch();
    closegraph();

    return (0);
}