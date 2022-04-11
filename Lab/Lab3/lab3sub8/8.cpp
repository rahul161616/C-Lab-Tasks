#include<iostream>
using namespace std;
class test{
 int x;                            //non static data member in private
                   //static data member in private
 public:
 static int a;  
 test(){                         //constructor to play with class values
     a++;   
 }
 static int gettest(){    //static memeber function
     return a;
 }

};
int test::a=0;
int main(){
    cout<<"Initial value of a = "<<test::a;    //we cant directly access the static member function because its private
    cout<<endl;
    test t1,t2;                                       //objects
    cout<<"Number of objects: "<<test::a;
}
