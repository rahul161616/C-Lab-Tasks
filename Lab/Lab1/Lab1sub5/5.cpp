#include <iostream>

using namespace std;

void add();  //function prototype
 
//main function 
int main()
{
  add();  //function calling (noarguements required as in prototype(prototype in line no 5))
}
void add(){    //called function function is void that means no returning need 
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"The sum is = "<<a+b;
}