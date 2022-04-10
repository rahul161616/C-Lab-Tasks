/*#include<iostream>
using namespace std;
class test{
 int x;                            //non static data member in private
 static int a;                    //static data member in private
 public:
 test(){                         //constructor to play with class values
     a++; 
     return x;  
 }
 static int gettest(){    //static memeber function
     return a;
 }

};
int test::a=0;
int main(){
    cout<<"Initial value of a = "<<test::gettest();    //we cant directly access the static member function because its private
    cout<<endl;
    test t1,t2;                                       //objects
    cout<<"Number of objects: "<<test::gettest();
}*/
