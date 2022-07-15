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
    void  display()
    {
        cout<<"The roll number is = "<<roll<<endl;
    }
};
class Theory:public virtual Student{
    int theorySub;
    public:
    void setTh(int theory)
    {
        theorySub=theory;
    }
    int getTh()
    {
        return theorySub;
    }
    void display()
    {
        cout<<"The marks in theory is = "<<theorySub<<endl;
    }
};
class Practical : public virtual Student
{
    int pracSub;
    public:
    void setPr(int practical)
    {
        pracSub=practical;
    }
    int getPr()
    {
        return pracSub;
    }
    void display()
    {
        cout << "The marks in practical is = " << pracSub << endl;
    }
};
class Result:public Theory,public Practical
{
 public:
   int add()
   {
      int add= getTh()+getPr();
      return add;
   }
   void display()
   {
   cout<<"The total marks is = "<<add()<<endl;
   }
};
int main(){
Result R;
R.setTh(10);
R.setPr(20);
R.setRoll(5);

R.Student::display();
R.Theory::display();
R.Practical::display();
R.display();
}
