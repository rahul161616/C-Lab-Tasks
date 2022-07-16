#include <iostream>

using namespace std;

class Student
{
    int roll;
    string name;

public:
    void setRoll(int a)
    {
        roll = a;
    }

    int getRoll()
    {
        return roll;
    }
    void setStr(string str)
    {
        name = str;
    }

    int getStr()
    {
        return name;
    }
};
class Marks:public student{

  int oop;
  int bc; 
  int fin;
  int pm;

};
class Result:public Student,public Marks{
    int total;
    float percentage;
};
int main()
{
 Result R;
};