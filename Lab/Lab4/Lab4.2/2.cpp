#include<iostream>

using namespace std;

class Rectangle{
    
     int length;
     int breadth;

     public:

     Rectangle()
     {
            length =0;
            breadth=0;
            cout<<"The area is = "<<length*breadth<<endl;
     }
     Rectangle(int len,int bre)
     {
         length = len;
         breadth = bre;
          cout<<"The area is = "<<length*breadth<<endl;
     }
     Rectangle(int value)
     {
            length=value;
            breadth=value;
            cout<<"The area is = "<<length*breadth<<endl;
     }
};

int main()
{
    Rectangle a,b(2,3),c(2);
    return 0;
}