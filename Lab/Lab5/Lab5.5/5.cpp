#include <iostream>

using namespace std;

class Shape
{
public:

   float base,height;

   Shape(float bs,float hei)
   {
    base=bs;
    height=hei;
   }
    void virtual draw()
    {
        cout << "Shape called!" << endl;
    }
};
class Triangle : public Shape
{
public:
     Triangle(float bse,float hgt):Shape(base,height)
     {
          base=bse;
          height=hgt;
     }
    void draw()
    {
        cout <<"The area of the triangle is = "<<0.5*base*height<< endl;
    }
};
class Rectangle : public Shape
{
public:
    Rectangle(float b,float hei):Shape(base,height)
    {
        base=b;
        height=hei;
    }
    void draw()
    {
        cout <<"The area of the rectangle is = "<<base*height<< endl;
    }
};
int main()
{
    Shape *S;
    int i, t = 0;
    cout << "Input test number" << endl;
    cin >> t;

    cout << "Input:" << endl;

    while (t != 0)
    {
        cin >> i;
        if (i == 0)
        {
            S = new Rectangle(2,3);
            S->draw();
        }
        else if (i == 1)
        {
            S = new Triangle(3,44);

            S->draw();
        }
        else
        {
            S = new Shape(2,3);
            S->draw();
        }
        t--;
    }
}
