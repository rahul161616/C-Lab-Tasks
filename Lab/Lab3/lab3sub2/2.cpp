#include <iostream>

using namespace std;
class circle{

     float radius;
     public :
     float getRadius(){
       cout<<"Enter the radius of the circle:"<<endl;
       cin>>radius;
       return radius;
   }
     void printarea(){
          cout<<"The area of the circle is = "<<(3.14*radius*radius);;
          
     }
};
int main()
{
    circle c;
    c.getRadius();
    c.printarea();
    return 0;
}