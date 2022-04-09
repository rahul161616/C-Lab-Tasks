#include <iostream>

using namespace std;

float area();
int main()
{

 cout<<"The area of the given circle is = "<<area();
}
float area(){
     float radius;
     cout<<"Enter the radius of the circle"<<endl;
     cin>>radius;
     return radius*radius*3.14;
}

