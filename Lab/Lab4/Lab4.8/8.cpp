#include <iostream>

using namespace std;

class Time
{
    int hours;
    int minutes;
    int seconds;

public:
    Time() : hours(0), minutes(0), seconds(0) {}
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    Time add(Time t)
    {
        Time temp;
                temp.seconds = seconds+t.seconds;   //TEMP = A+B;
                temp.minutes = minutes+t.minutes+(temp.seconds/60);
                temp.hours = hours+t.hours+(temp.minutes/60);
                temp.minutes = temp.minutes % 60;
                temp.seconds = temp.seconds % 60;
                return temp;
    }
};
int main()
{
    Time a(4,5,6),b(1,2,3),c;
    c=a.add(b);
    c.display();
}