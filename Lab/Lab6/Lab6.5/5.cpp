// conversion from polar to rectangular coordinate
#include <iostream>
#include <math.h>
using namespace std;

class polar
{
    public:
    double theta, r;
    polar()
    {
        theta = 0;

        r = 0;
    }
    polar(double a, double b)
    {
        r = a;
        theta = b;
    }
};

class rectangular
{
    double x, y;
public:
   rectangular(){}
    rectangular (polar p){
        x=p.r*cos(p.theta);
        y=p.r*sin(p.theta);
    }

    void output()
    {
        cout << "(" << x << "," << y << ")";
    }
};

int main()
{
    rectangular r1;
    polar p1(3, 45);
    r1 = p1; // polar to rectangular conversion
    r1.output();
}