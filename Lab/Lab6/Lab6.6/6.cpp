#include<iostream>

using namespace std;

class Complex{
     int real,imag;
     public:
     Complex(){}
     Complex(float r,float i)
     {
        real=r;
        imag=i;
        }
     Complex operator+(Complex obj)
     {
        Complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
       
     }
          Complex operator-(Complex obj)
     {
        Complex temp;
        temp.real=real-obj.real;
        temp.imag=imag-obj.imag;
        return temp;
       
     }
     void displaySum()
     {
         cout << real << "+" << imag << "i"<<endl;
     }
          void displayDiff()
     {
         cout << real << "+" << imag << "i"<<endl;
     }
};
int main()
{
    Complex c(10,20),d(20,10),C;
    C=c+d;
    C.displaySum();
    C = c - d;
    C.displayDiff();
}