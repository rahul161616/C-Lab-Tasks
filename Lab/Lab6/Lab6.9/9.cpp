#include <iostream>
using namespace std;
template <class T>
void swap_operation(T &a, T &b)
{
    T t;
    cout << "The multiplication is =" << (a * b) << endl;
    cout << "The average is =" << (a + b) / 2 << endl;
}
int main()
{
    int p, q;
    p = 10;
    q = 20;

    swap_operation<int>(p, q);
    return 0;
}