#include<iostream>

using namespace std;

class XYZ;      
class ABC{
    int num1;           //private data member
        public:
        void input()    //accepting input
        {
            cout<<"Enter the first number:"<<endl;
            cin>>num1;
        }
        friend void max(ABC a,XYZ x);   //calls max func with its class and another class as a friend
};
class XYZ{
    int num2;           //private data member
    public:
        void input()
        {
            cout<<"Enter the second number:"<<endl;
            cin>>num2;
        }
        friend void max(ABC a,XYZ x);     //calls max func with its class and another class as a friend
};
void max(ABC a,XYZ x)     //the function which is called as friend to find the max "among two classes" ABC XYZ as objects a and x
{
        cout<<"The sum is = "<<a.num1+x.num2;   //adding two numbers coming from class ABC as object a and variable num1 as a.num1
}

int main()
{
    ABC a;                //class object a
    XYZ x;               //class object x
    a.input();          //calling input function for class a 
    x.input();         //calling output function for class x
    max(a,x);         //calling max functions passing objects as a and x 
    return 0;
}