#include <iostream>

using namespace std;

class sum
{
   int add;

public:
    sum(int b,int c)
    {
        add = b+c;
    }
  sum()
  {
      add =0;
  }
    void display()
    {
        cout<<"The sum is = "<<add<<endl;
    }
};
int main()
{
    sum s(1,2),s1;
    s.display();
    s1.display();
    return 0;
}