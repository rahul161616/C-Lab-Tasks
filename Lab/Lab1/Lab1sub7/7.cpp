#include <iostream>

using namespace std;

float area(); //function prototype (no arguements)
int main()
{

 cout<<"The area of the given circle is = "<<area(); //function calling directly at printing statement
}
float area(){   //the called function with require a returning statement (except void all requires return statement)
     float radius;
     cout<<"Enter the radius of the circle"<<endl;
     cin>>radius;
     return radius*radius*3.14;  //will return the area directly which will be caught at area();
}

