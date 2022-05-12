#include<iostream>

using namespace std;

  class B;
  class A
   {
    int a;
      public:
       A(int p)
       {
         a =p;
       }
   friend void Swap(A a,B b);
  };
  
 class B
  {
   int b;
     public:
     B(int q)
    {
    b=q;
    }
     friend void Swap(A a,B b);
};
void Swap(A a,B b)
{
    int temp;
    cout<<"The value "<<a.a<<" "<<b.b<<endl;
    temp = a.a;
    a.a=b.b;
    b.b=temp;
    cout<<"The value "<<a.a<<" "<<b.b<<endl;
}
int main()
{
    A a(1);
    B b(2);
    Swap(a,b);
    return 0;
}