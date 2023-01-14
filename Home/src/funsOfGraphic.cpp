#include <graphics.h>
#include <stdio.h>

int main(){
    initwindow(500, 500, "This is Window");

    setcolor(BLUE);
    setfillstyle(SOLID_FILL, YELLOW);//take two parameter 
    circle(250, 250, 150);
    floodfill(250, 250, BLUE);

    circle(250, 250, 50);
    //this will create white default stroke circle

    setcolor(GREEN);
    circle(250, 250, 100);
    //this will create green stroke circle as specified using setcolor() function 


    getch();
}