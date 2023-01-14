#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);


    line(100, 100, 200, 100); //will draw a horizontal line

    line(10, 10, 200, 10); //will draw another horizonatl line

    getch();

    closegraph();
}