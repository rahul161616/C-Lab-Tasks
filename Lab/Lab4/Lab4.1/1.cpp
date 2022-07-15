#include <iostream>
#include<string.h>

using namespace std;

class student
{
    string name;
    public:
        student(string name1 = "Unknown") : name(name1) {}
        void display(){cout<<name<<endl;}
};

int main()
{
    string name = "Rahul";
    student s,s1(name);
    s.display();
    s1.display();
    return 0;
}
