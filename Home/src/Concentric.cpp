#include <graphics.h>

int main(){
    int gd = DETECT, gm;
    int x = 200, y = 200, radi;

    initgraph(&gd, &gm, NULL);

    for(radi = 10; radi <=200; radi+=20){
        circle(x, y, radi);
    }

    getch();
    closegraph();
    return 0;
}