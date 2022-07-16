#include<iostream>

using namespace std;

 class dist
{
    float meter;

public:
    dist()
    {
        meter=0;
    }
    dist(float m)
    {
        meter = m;
    }
    void display(){
    cout<<"The height in meters is= "<<meter<<endl;
    }
};

 class Distance
{
    int feet, inch;

public:
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
 
    operator dist() // operator function
    {
        float m;
       inch+=feet*12;
       m=inch*0.0254;

        return dist(m);
    }
};

main()
{
    Distance d1(12,9);

    dist d2;
    d2 =d1 ;
    d2.display();
}