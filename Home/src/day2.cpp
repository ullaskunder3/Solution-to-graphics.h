#include <graphics.h>

int main(){
    int gDrive = DETECT; //also numeric value 0:(autodetect)
    //*graphdriver is an integer that specifies the graphics driver to be used.

    int gMode;
    //*graphmode is an integer that specifies the initial graphics mode 
    //(unless *graphdriver equals DETECT; in which case, 
    //*graphmode is set by initgraph to the highest resolution available for the detected driver).

    initgraph(&gDrive, &gMode, NULL);
    //initgraph initializes the graphics system by loading a graphics driver from disk
    //and puts the system into graphics mode

    arc(200, 200, 0, 90, 50);//0 deg start from right hand side
    line(100, 100, 200, 100); //this will draw horizonatl line
 

    getch();
    closegraph();
}