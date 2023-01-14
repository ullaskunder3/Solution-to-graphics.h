#include <graphics.h>

int main(){
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    //void bar(int left, int top, int right, int bottom)
    bar(200, 200, 100, 100);

    getch();
    closegraph();
}