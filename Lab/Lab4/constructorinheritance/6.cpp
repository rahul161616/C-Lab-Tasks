#include <iostream>

using namespace std;

class student
{

    int roll_no;
    string name;

public:
    student(int a)
    {
        roll_no = a;
    }
    void setName(string nam)
    {
        name = nam;
    }
    string getName()
    {
        return name;
    }
};

class Derived_student : public student
{
public:
    int x;
    Derived_student(int a) : student(a)
    {
        x = a;
    }
    void disp()
    {
        cout << "The name is " << getName() << endl;
        cout << "The roll is " << x << endl;
    }
};
int main()
{
    int roll;
    string name;

    cout << "Enter roll :" << endl;
    cin >> roll;

    cout << "Enter name :" << endl;
    cin >> name;

    Derived_student Ds(roll);
    Ds.setName(name);
    Ds.disp();
}