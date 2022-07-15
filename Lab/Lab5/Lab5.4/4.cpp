#include<iostream>

using namespace std;

class Student
{
       int roll_no;

       public:
       void setRollno(int a)
       {
           roll_no=a;
       }
      void display()
      {
        cout<<"The roll number is = "<<roll_no<<endl;
      }
};

class Test:public Student
{
     int mark1;
     int mark2;

     public:

     void setMark(int a,int b)
     {
          mark1 = a;
          mark2=b;
     }
     int getMark()
     {
        return mark1+mark2;
     }
     void display(){
       cout<<"The mark in subject 1 is = "<<mark1<<endl;
       cout<<"The mark in Subject 2 is = "<<mark2<<endl;
     }
};

class Sport
{
        int score;
        public:
        void setScore(int a)
        {
            score=a;
        }
        int getScore()
        {
            return score;
        }
     void display()
     {
        cout<<"The score in the sport is = "<<score<<endl;
     }
};

class Result:public Test,public Sport{
    public:
    int total()
    {
       int total = getMark();
        return total;
    }
    void display()
    {
        cout<<"The total marks in two subjects is = "<<total()<<endl;
        cout<<"The score in sports is= "<<getScore()<<endl;
    }
};

int main()
{
  Result R;
  R.setMark(90,90);
  R.setRollno(20);
  R.setScore(5);

  R.Student::display(); //selects specified display function
  R.Test::display();
  R.Sport::display();
  R.display();
 
  
}