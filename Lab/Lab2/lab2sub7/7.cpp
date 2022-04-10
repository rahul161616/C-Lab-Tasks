#include <iostream>

using namespace std;

void area();
int area(int,int);
float area(float);
int main()
{
    int l,m;
    float p;
 //rectangle
    area();
    cout<<"Enter the length and breadth"<<endl;
    cin>>l>>m;
    cout<<"The area of the rectangle is : "<<area(l,m)<<endl;
    //circle
    cout<<"Enter the radius of the circle"<<endl;
    cin>>p;
    cout<<"The area of the circle is = :"<<area(p)<<endl;
   }
void area(){
//square
int x;
    cout<<"Enter length of the square:"<<endl;
   cin>>x;
   cout<<"The area of the square is : = "<<x*x<<endl;
}
int area(int a, int b){
     return a*b;
}
float area(float s){
  return (3.14*s*s);
}