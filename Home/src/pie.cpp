#include<graphics.h>

int main()
{
   int gd = DETECT, gm, midx, midy;

   initgraph(&gd, &gm, NULL);

   setcolor(MAGENTA);
   rectangle(0,40,639,450);
   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
   setcolor(WHITE);

   char label[] = "Pie Chart";
   outtextxy(275,10,label);

   midx = getmaxx()/2;
   midy = getmaxy()/2;

   setfillstyle(LINE_FILL,BLUE);
   pieslice(midx, midy, 0, 75, 100);

   char percent1[] = "20.83%";
   outtextxy(midx+100, midy - 75, percent1);

   setfillstyle(XHATCH_FILL,RED);
   pieslice(midx, midy, 75, 225, 100);

   char percent2[] = "41.67%";
   outtextxy(midx-175, midy - 75, percent2);

   setfillstyle(WIDE_DOT_FILL,GREEN);
   pieslice(midx, midy, 225, 360, 100);

   char percent3[] = "37.50%";
   outtextxy(midx+75, midy + 75, percent3);

   getch();
   return 0;
}