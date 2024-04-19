#include<graphics.h>  
#include<conio.h>  
int main()  
{  
    int gd=DETECT,gm;  

    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file

    initgraph(&gd,&gm, data);

    setbkcolor(GREEN);

    printf("\t\t\t\n\n LINE");
    line(50, 40, 190, 40);

    printf("\t\t\n\n\n\n RECTANGLE");
    rectangle(125, 115, 215, 165);

    printf("\t\t\t\n\n\n\n\n\n\n ARC");
    arc(120, 200, 180, 0, 30);

    printf("\t\n\n\n\n CIRCLE");
    circle(120, 270, 30);

    printf("\t\n\n\n\n ECLIPSE");
    outtext("\t\n\n\n\n ECLIPSE");
    ellipse(120,350,0,360,30,20);  


    getch();  
    closegraph();

return 0;


}  