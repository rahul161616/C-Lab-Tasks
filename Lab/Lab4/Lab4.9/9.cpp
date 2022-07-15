#include <iostream>

using namespace std;

class complex
{

    int real;
    int imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(int real, int imag)  //-> is used to remove the confusion from private real img and passed real imag
    {
        this ->real=real;   //this ->separates private real from passed int real in (int real,int imag)
        this ->imag=imag;   //this ->separates private imag from passed int imag in (int real,int imag)
    }

    complex add(complex a, complex b)   
    {
        complex temp;
        temp.imag = a.imag + b.imag;   //this is like c= a+b from main
        temp.real = a.real + b.real;   //this is like c=a+b from main
        return temp;
    }
    void display()
    {
        cout << real << "+ i" << imag << endl;
    }
};
int main()
{
    int p, q, r, s;

    cout << "Enter the values:" << endl;
    cin >> p >> q >> r >> s;
    complex a(p, q);
    complex b(r, s);
    complex c;
    c = c.add(a, b);  // object c calls add passing object a and b as arguement
    c.display();
    return 0;
}