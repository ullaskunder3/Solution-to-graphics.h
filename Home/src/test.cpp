#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    char data[] = "C:\\TDM-GCC-32\\lib\\libbgi.a";

    initgraph(&gd, &gm, data);
    //you can also pass NULL for third parameter if you did above setup successfully
    //example: initgraph(&gd, &gm, NULL);

    circle(200, 200, 100);
    getch();
    closegraph();
    return 0;
}