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
    int total()
    {
        int total = getMark1() + getMark2();
        return total;
    }
    void display()
    {
        cout<<"The roll number is = :"<<getRoll()<<endl;
        cout<<"The mark in subject 1 is = :"<<getMark1()<<endl;
        cout<<"The mark in Subject 2 is = :"<<getMark2()<<endl;
        cout<<"The total mark is = :"<<total();
    }
};
int main()
{
    Result R;

    int mark1,mark2,roll_number;
    cout<<"Enter the roll number:";
    cin>>roll_number;
    cout<<"Enter the marks in subject 1:";
    cin>>mark1;
    cout<<"Enter the mark in subject 2:";
    cin>>mark2;

    R.setRoll(roll_number);
    R.setMark1(mark1);
    R.setMark2(mark2);
    R.display();
    return 0;
}
