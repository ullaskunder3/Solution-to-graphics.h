#include <conio.h>
#include <graphics.h>
int main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, NULL);

   setcolor(YELLOW);
   rectangle(0,30,639,450);
   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
   setcolor(WHITE);

   char title[] = "Bar Chart";
   outtextxy(275,0,title);

   setlinestyle(SOLID_LINE,0,2);

   line(100,420,100,60);
   line(100,420,600,420);
   line(90,70,100,60);
   line(110,70,100,60);
   line(590,410,600,420);
   line(590,430,600,420);

   char cordY[] = "Y";
   outtextxy(95,35,cordY);

   char cordX[] = "X";
   outtextxy(610,405,cordX);

   char cordO[] = "O";
   outtextxy(85,415,cordO);

   setfillstyle(LINE_FILL,BLUE);
   bar(150,100,200,419);

   setfillstyle(XHATCH_FILL,RED);
   bar(225,150,275,419);

   setfillstyle(WIDE_DOT_FILL,GREEN);
   bar(300,200,350,419);

   setfillstyle(INTERLEAVE_FILL,MAGENTA);
   bar(375,125,425,419);

   setfillstyle(HATCH_FILL,BROWN);
   bar(450,175,500,419);

   getch();
   return 0;
}