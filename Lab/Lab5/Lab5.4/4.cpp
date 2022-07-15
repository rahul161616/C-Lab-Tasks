#include<iostream>

using namespace std;

class Student{
       int roll_no;

       public:
       void setRollno(int a)
       {
           roll_no=a;
       }
       int getRollno()
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
     void display(){
     cout<<"The mark in subject 1 is = :"<<getMark1()<<endl;
    cout<<"The mark in Subject 2 is = :"<<getMark2()<<endl;
     }
};
    class Sport{
        int score;
        void setScore(int a)
        {
            score=a;
        }
        int getScore()
        {
            return score;
        }
    };
class Result:public Test,public Sport{
    public:
    int total()
    {
        int total = getMark1()+getMark2();
        return total;
    }
};


int main()
{

}