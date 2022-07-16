// binary
#include <iostream>

using namespace std;

class Operator
{
    int a;

public:
    void setData(int f1)
    {
        a = f1;
    }
    void operator ++(int)
    {
        a++;
        cout<<a<<endl;
    }
        void operator --(int)
    {
        a--;
        cout<<a;
    }
};
int main()
{
      Operator o;
      o.setData(10);
      o++;
      o--;
}