#include <iostream>

using namespace std;

//function overload means using the same function names at multiple places doing multiple tasks
void multiply();
int multiply(int,int);
int multiply(int,int,int);
int main()
{
    int a,b,c;
    cout << "Enter the numbers to multiply" <<endl;
    cin>>a>>b>>c;                                     //scanning a b c
    cout<<"The answer is = "<<multiply(a,b,c)<<endl;  //function calling as passing a b c
    cout<<"The answer is = "<<multiply(a,b)<<endl;    //function calling as passing a b
    multiply(); //calling the non return type function
    return 0;
}
void multiply(){    // called function
    int a,b;
      cout<<"Enter two numbers:"<<endl;
      cin>>a>>b;
      cout<<"The product is = "<<a*b; 
}
int multiply(int x,int y,int z){
    return x*y*z;     //a at x b at y c at z
}
int multiply(int p,int q){
    return p*q;  //a at p and b at q
}