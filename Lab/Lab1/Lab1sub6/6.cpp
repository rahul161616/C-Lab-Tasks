#include <iostream>

using namespace std;

void getarea();  //function prototype
int main()
{
    getarea(); //calling function
  
}
void getarea(){  
    int length,breadth;
     cout<<"Enter the length and breadth"<<endl;
     cin>>length>>breadth;                             //scanning length and breadth     
      cout<<"The area is = "<<length*breadth;         //computing area
}