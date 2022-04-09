#include <iostream>

using namespace std;

int area(int,int);
int main()
{
    int a,b;
   cout<<"The area is = "<<area(a,b);
}
int area(int length,int breadth){
    

     cout<<"Enter the length and breadth"<<endl;
     cin>>length>>breadth;
     return length*breadth;
}