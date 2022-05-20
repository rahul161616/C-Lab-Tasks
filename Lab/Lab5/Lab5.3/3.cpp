#include <iostream>

using namespace std;

class Student
{
    int roll;

public:
    void setRoll(int a)
    {
        roll = a;
    }
    int getRoll()
    {
        return roll;
    }
};

class Test : public Student
{
    int sub1;
    int sub2;

public:
    void setMark1(int a)
    {
        sub1 = a;
    }
    int getMark1()
    {
        return sub1;
    }

    void setMark2(int a)
    {
        sub2 = a;
    }
    int getMark2()
    {
        return sub2;
    }
};

class Result : public Test
{
public:
    void total()
    {
        int total = getMark1() + getMark2();
        cout<<"The total is = "<<total<<endl;
    }
};
int main()
{
    Result R;
    R.setRoll(10);
    R.setMark1(20);
    R.setMark2(30);
    R.total();
    cout<<"The roll is = "<<R.getRoll();
    return 0;
}