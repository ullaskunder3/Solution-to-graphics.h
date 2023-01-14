#include <iostream>
#include <graphics.h>

int main(){
    int WIDTH = 600, HEIGHT = 400;

    char title[] = "hola by ullas";
    initwindow(WIDTH, HEIGHT, title);
    
    setfillstyle(1,4);//red
    bar(0,0,WIDTH, HEIGHT);

    setfillstyle(1,7);
    bar(WIDTH/2-100, 100, WIDTH/2+100, HEIGHT-100);

    settextstyle(8, HORIZ_DIR, 1);
    char label[] = "UserName"; 
    outtextxy(WIDTH/2-90, 160, label);
    rectangle(WIDTH/2-90, 185, WIDTH/2+90, 205);

    char label3[] = "Password";
    outtextxy(WIDTH/2-90, 210, label3);
    char texth[] = "Password";
    int textHeight = textheight(texth);
    rectangle(WIDTH/2-90, 215+textHeight, WIDTH/2+90, 215+textHeight+20);

    getch();

    closegraph();
    return 0;

}