/*
//using constructors to receive data

#include<iostream>
using namespace std;

class Complex
{
    int num1,num2;     //private values
    public:

    Complex(int a,int b)    //Parameterized constructors for objects from main as c and b
    {
        num1=a;
        num2=b;
    }
    Complex()                                          //Default constructors for object d from main
    { 
        num1,num2 = 0;                                 //assigining values of num1 and num2 = 0 (as constructors are created to assign values)
    }

    friend Complex add(Complex c, Complex b);          // friend function declaration
    void display()                                     // display function to display
    {
        cout << num1 <<" + i"<<num2;
     }

};

Complex add(Complex c,Complex b)                        //friend function definition 
{
    Complex temp;                                       //creating object temp
    temp.num1 = c.num1+b.num1;                          //adding real numbers of c and b
    temp.num2 = c.num2+b.num2;                          //adding imaginary numbers of c and b

    return temp;                                        //returning the added value
}
int main()
    {
        Complex c(2,3),b(4,5),d;
        d=add(c,b);
        d.display();
    }*/


//using functions to receive data
#include <iostream>
using namespace std;

class Complex
{
    int real, img; // private values
public:
    void receive(int a, int b) // Parameterized constructors for objects from main as c and b
    {
        real = a;
        img = b;
    }
    
    friend Complex add(Complex, Complex); // friend function declaration
    void display()                            // display function to display
    {
        cout << real << " + i" << img;
    }
};

Complex add(Complex c, Complex b) // friend function definition
{
    Complex temp;                // creating object temp
    temp.real = c.real + b.real; // adding real numbers of c and b
    temp.img = c.img + b.img; // adding imaginary numbers of c and b

    return temp; // returning the added value
}
int main()
{
    Complex c, b, d;
    c.receive(2,3);
    b.receive(4,5);
    d = add(c, b);
    d.display();
}