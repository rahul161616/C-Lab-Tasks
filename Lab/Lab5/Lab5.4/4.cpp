#include<iostream>

using namespace std;

class Student{
       int roll_no;

       public:
       void setData(int a)
       {
           roll_no=a;
       }
       int getNum()
       {
           return roll_no;
       }
};
class Test:public Student
{
     int mark1;
     int mark2;

     public:

     void setMark1(int a)
     {
          mark1 = a;
     }
     int getMark1()
     {
         return mark1;
     }
     void setMark2(int b)
     {
         mark2 = b;
     }
     int getMark2()
     {
         return mark2;
     }
};


int main()
{

}