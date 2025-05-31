#include<iostream>
using namespace std;

class Shape
{
    void calculateArea()
    {
        cout << "Area not defined for generic shape" << endl;
    }
};
class Circle:public Shape
{
    private:
        float radius;
        float area;
    public:
    Circle(float radius):radius(radius)
    {
        cout <<"Circle:" <<endl;
    }
    void calculateArea()
    {
        area=3.14*radius*radius;
        cout << "Area of circle:" << area << endl;
    }
};
class Rectangle:public Shape
{
    private:
        float lenght;
        float width;
        float area;
    public:
    Rectangle(float lenght,float width):lenght(lenght),width(width)
    {
        cout <<"Rectangle:" <<endl;
    }
    void calculateArea()
    {
        area=lenght*width;
        cout << "Area of Rectangle:"<< area << endl;
    }
};
class Triangle:public Shape
{
    private:
        float base;
        float height;
        float area;
    public:
    Triangle(float base,float height):base(base),height(height)
        {
        cout <<"Triangle:" <<endl;
    }
    void calculateArea()
    {
        area= 0.5*base*height;
        cout << "Area of Triangle:"<< area << endl;
    }
};
int main()
{
    Circle c1(2.3);
    c1.calculateArea();
    Rectangle r1(2.3,4.4);
    r1.calculateArea();
    Triangle t1(1.2,4.3);
    t1.calculateArea();
    return 0;
}

