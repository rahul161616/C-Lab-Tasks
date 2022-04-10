#include <iostream>

using namespace std;

void multiply();
int multiply(int,int);
int multiply(int,int,int);
int main()
{
    int a,b,c;
    cout << "Enter the numbers to multiply" <<endl;
    cin>>a>>b>>c;
    cout<<"The answer is = "<<multiply(a,b,c)<<endl;
    cout<<"The answer is = "<<multiply(a,b)<<endl;
    multiply();
    return 0;
}
void multiply(){
    int a,b;
      cout<<"Enter two numbers:"<<endl;
      cin>>a>>b;
      cout<<"The product is = "<<a*b;
}
int multiply(int x,int y,int z){
    return x*y*z;
}
int multiply(int p,int q){
    return p*q;
}