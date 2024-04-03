#include <iostream>
#include <graphics.h>
using namespace std;
class point
{
    int x;
    int y;
public:
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    void setx(int _x)
    {
        x=_x;
    }
    void sety(int _y)
    {
        y=_y;
    }
    void print()
    {
        cout<<"("<<x<<","<<y<<")";
    }
    void setpoint(int _x,int _y)
    {
        x=_x;
        y=_y;
    }
// constractors

    point ()
    {
//default
        x=y=0;
        cout<<"\n point parameterless constrctors";

    }
    point(int _r)
    {
        x=y=_r;
        cout<<"\n point one paramter constractor";
    }
    point(int _x,int _y)
    {
        x=_x;
        y=_y;
        cout<<"\n two paramters constractors";

    }
    ~point()
    {
        cout<<"\n point destractor ";
    }
};
class Rec
{
    point ul;
    point lr;
public:
    void print()
    {
        cout<<"\n upper left point :";
        ul.print();
        cout<<"\n lower right point:";
        lr.print();
    }

    point getul()
    {
        return ul;
    }
    point getlr()
    {
        return lr;
    }
    void setul(point _ul)
    {
        ul=_ul;
    }
    void setul(int x,int y)
    {
        ul.setpoint(x,y);
    }

    void setlr(point _lr)
    {
        lr=_lr;
    }
    void setlr(int x,int y)
    {
        lr.setpoint(x,y);
    }

    void setrect(point _ul,point _lr )
    {
        ul=_ul;
        lr=_lr;
    }
    void setrect(int x1,int y1,int x2,int y2)
    {
        ul.setpoint(x1,y1);
        lr.setpoint(x2,y2);
    }
    Rec()
    {
        cout<<"\n rectangle paramatelss constarctor";
    }
    Rec(int x1,int y1,int x2,int y2):ul(x1,y1),lr(x2,y2)
    {
        cout<<"\n rectangle 4 paramter constractor ";
        //ul.setpoint(x1,x2);
        //lr.setpoint(y1,y2);
    }
    void draw()
    {
        rectangle(ul.getx(),ul.gety(),lr.getx(),lr.gety());
    }

    ~Rec()
    {
        cout<<"\n rectangle destractor ";

    }
};
class Circle{


point center;
double radius;

public:
    Circle():center(pont(),radius(0)){}
    Circle(int _x,int _y,double _radius):center (point (_x,_y)),radius(_radius){}
    void draw(){

    }


};



int main()
{
    int gdriver=DETECT,gmode,errorcode;
    initgraph(&gdriver,&gmode,"");


    Rec r1 (10,20,30,40);
    r1.draw();


    r1 .print();

//    point p1(10,20);
    point p1 (70,80);
    p1.print();

    r1.setul(10,30);
    r1.print();



    getch();

    closegraph();
     return 0;
}
