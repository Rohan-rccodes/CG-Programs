#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include<conio.h>

int main()
{
int gm,gd=DETECT;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
arc(100,100,0,180,75);
getch();
closegraph();

}
