/*
//Using constructors
#include <iostream>

using namespace std;

class Time
{
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int a ,int b, int c)
    {
        cout << "Enter the time:" << endl;
        cin >> hours >> minutes >> seconds;
    }
    void display()
    {
        cout << " " << hours << ":"
             << " " << minutes << ":"
             << " " << seconds;
        cout << endl;
    }
    Time add(Time);
};
Time Time ::add(Time t)
{
    Time temp;
    temp.seconds = t.seconds + seconds;
    temp.minutes = t.minutes + minutes;
    temp.hours = t.hours + hours;

    if (temp.minutes >= 60 && temp.seconds >= 60)
    {
        temp.minutes = seconds / 60;
        temp.hours = minutes / 60;
        temp.minutes = seconds % 60;
    }
    return temp;
}
int main()
{
    int a,b,c,d,e,f;
    Time t1(a,b,c), t2(d,e,f), t3;

    t3 = t1.add(t2);
    t3.display();
}
*/

// Using functions
#include <iostream>

using namespace std;

class Time
{
    int hours;
    int minutes;
    int seconds;

public:
    void input()
    {
        cout << "Enter the time:" << endl;
        cin >> hours >> minutes >> seconds;
    }
    Time add(Time);
    void display()
    {
        cout << " " << hours << ":"<< " " << minutes << ":" << " " << seconds;
        cout << endl;
    }
};
Time Time ::add(Time t)
{
    Time temp;
    temp.seconds = seconds + t.seconds;    // t = t1+t2    temp.seconds is we just made here 
                                           //t1 is calling add function so it accesses data members directly so is written seconds
                                           //time t is an arguement passed as t2
    temp.minutes = minutes + t.minutes + (temp.seconds / 60);
    temp.hours = hours + t.hours + (temp.minutes / 60);

    temp.minutes = temp.minutes % 60;
    temp.seconds = temp.seconds % 60;

    return temp;
}
int main()
{
    Time t1, t2, t3;
    t1.input();
    t2.input();

    t3 = t1.add(t2);
    t3.display();
}
