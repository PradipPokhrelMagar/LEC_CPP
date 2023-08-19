// Example of array of pointer to base class

#include <iostream>
using namespace std;

class Point
{
    public:
    virtual void draw()
    {
        cout<<"Point"<<endl;
    }
};

class Line:public Point
{
    public:
    void draw()
    {
        cout<<"line"<<endl;
    }
};
    


class Triangle:public Point
{
    public:
    void draw();
    {
        cout<<"Triangle"<<endl;
    }
};
class Polygon:public Point{
    public:
    void draw()
    {
        cout<<"Polygon"<<endl;
    }
};

class circle:public Point{
    public:
    void draw()
    {
        cout<<"circle"<<endl;
    }
};

int main(){

    Point pt;
    Line ln;
    Triangle tr;
    Polygon py;
    circle cr;

    Point *baseptr[]={&pt,&ln,&tr,&py,&cr}


}