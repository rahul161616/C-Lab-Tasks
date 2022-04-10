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
     float printarea(){
          return (3.14*radius*radius);
     }
};
int main()
{
    circle c;
    c.getRadius();
    cout<<"The area of the circle is = "<<c.printarea();
    return 0;
}