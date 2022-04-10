#include<iostream>
using namespace std;
void cube();
void cube(int ,int ,int );
void cube(float);
int main()
{
    cube ();
    cube (2,3,5);
    cube (12);
}
void cube (){
int a;
  cout<<"Enter the length of the cube:"<<endl;
cin>>a;
  cout<<"The area of the cube is = "<<a*a*a<<endl;
}
void cube(int len,int bre,int hei){
    cout<<"The volume of the cube is = "<<len*bre*hei<<endl;
    }
    void cube (float r){
    cout<<"The radius of the circle is = "<<(2*3.14*r);
    }