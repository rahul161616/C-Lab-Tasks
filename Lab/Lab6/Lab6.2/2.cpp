// binary
#include <iostream>

using namespace std;

class multiply
{
    int a;

public:
    void getDataA(int f1)
    {
        a = f1;
    }
    void getDataB(int f2)
    {
        a = f2;
    }
    multiply operator*(multiply obj)
    {
        multiply t;
        t.a = a * obj.a;
        return t;
    }
    void display()
    {
        cout << a;
    }
};
int main()
{
    multiply a1, a2, a3;
    a1.getDataA(10);
    a2.getDataB(60);
    a3 = a1 * a2;
    a3.display();
}