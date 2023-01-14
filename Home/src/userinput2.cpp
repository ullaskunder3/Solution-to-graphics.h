#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void drawrect(int left,int top,int right,int bot);

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int firsttime=1;
    int currentl=5;
    int currentt=400;
    int currentr=40;
    int currentb=450;

    char ch;
    settextstyle(0, HORIZ_DIR, 1);
    char title[] = "To start press 'S'";
    outtextxy(20, 20, title);
    ch = getch();
    cleardevice(); 
    
    drawrect(0,30,639,450);

        while(ch!='q')
       { 
        ch = getch();
        switch (ch)
        {
         case KEY_RIGHT:currentr=currentr+5;
                        currentl=currentl+5;
                        break;
         case KEY_LEFT:currentr=currentr-5;
                       currentl=currentl-5;
                       break;
        }
        cleardevice();
        drawrect(currentl,currentt,currentr,currentb);
       }




    getch();
    closegraph();
}

void drawrect(int left,int top,int right,int bot)
{
    setcolor(BLUE);
    rectangle(left,top,right,bot);
    floodfill(10, 10, YELLOW);

}