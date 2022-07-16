#include<iostream>
 using namespace std;
template <class T>
 void swap_requested(T &a,T &b)
{
     T t;
     t=a;
     a=b;
     b=t;
}
int main()
{
    int p,q;
    p=10;
    q=20;

/*for int*/
    cout << "\n\nFor int type:" << endl;
    cout <<"Before swapping:"<< p << " " << q<<endl;
    swap_requested<int>(p,q);
    cout << "After swapping:" <<p <<  " " << q<<endl;

/*for float*/

     float x=10.5,y=20.5;
     cout<<"\n\nFor float type:"<<endl;
     cout << "Before swapping:" << x << " "<< y<<endl;
     swap_requested<float>(x, y);
     cout << "After swapping:" << x << " "<< y<<endl;

     /*for char*/

     char ch1='a',ch2='b';
     cout << "\n\nFor char type:" << endl;
     cout << "Before swapping:" << ch1 << " " << ch2 << endl;
     swap_requested<char>(ch1, ch2);
     cout << "After swapping:" << ch1 << " " << ch2 << endl;
}