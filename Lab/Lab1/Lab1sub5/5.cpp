#include <iostream>

using namespace std;

void add();

int main()
{
  add();
}
void add(){
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"The sum is = "<<a+b;
}