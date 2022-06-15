#include<iostream>

using namespace std;

class A1;
class A{
   float feet;
   float inches;
   public:
   void input1()
   {
       cout<<"Input value in feet:";
       cin>>feet;
   }
    void input2()
   {
       cout<<"Input value in inches:";
       cin>>inches;
   }
   void add(A&,A&);
};
void A:: add(A &a, A &b)
{
    float sum = a.feet+ b.inches;
    cout<<"The sum is = "<<sum<<endl;   
}
int main()
{
    A a,b,c;
    a.input1();
    b.input2();
    c.add(a,b);
    return 0;
}