#include <iostream>

using namespace std;

class student
{
    string name;
    public:
    student()
    {
        cout<<"No name known!"<<endl;
    }
    student(string nam)
    {
        name = nam;
        cout<<nam;
    }
};

int main()
{
    string name = "Rahul";
    student s,s1(name);
    return 0;
}