#include<iostream>

using namespace std;

class D;
class C
{
    float value1;
    public:
    C()
    {
        cout<<"Enter the value :";
        cin>>value1;
    }
    friend void mean(C c,D d);   
};
class D
{
     float value2;
     public:
     D()
     {
         cout << "Enter the value :";
         cin >> value2;
     }
         friend void mean(C c,D d);   
};

void mean(C c,D d)
{
    float sum = (c.value1+d.value2)/2;
    cout<<"The sum is = "<<sum;
}
int main()
{
    C c;
    D d;
    mean(c,d);
}