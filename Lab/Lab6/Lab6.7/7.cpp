#include <iostream>
using namespace std;
template <class T>
void operation(T &a, T &b)
{
    cout << "The sum is is =" << a + b << endl;
    cout << "The difference is =" << a - b  << endl;
}
int main()
{
    int p=10,q = 20;
   float r=20.5,s=12;

    operation<int>(p, q);
    operation<float>(r, s);
    return 0;
}