#include <iostream>
#include <graphics.h>

int main(){
    int WIDTH = 600, HEIGHT = 400;
    int radi,x,y;

    char title[] = "hola by ullas";
    initwindow(WIDTH, HEIGHT, title);

    std::cout<<"Enter the radius"<<std::endl;
    std::cin>>radi;

    std::cout<<"Enter x & y cord res"<<std::endl;
    std::cin>>x>>y;

    circle(x,y,radi);


    system("pause");

    getch();
    closegraph();
    return 0;

}