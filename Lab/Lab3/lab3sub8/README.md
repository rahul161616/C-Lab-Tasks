#include<iostream>
using namespace std;
class test{
public:			//we can directly access the value 
 int x;                            //non static data member in private
 static int a;                    //static data member in private
 test(){                         //constructor to play with class values
     a++; 
       
 }
 static int gettest(){    //static memeber function
     return x;             //will throw error as it is non static value
     return a;            //will not throw error as a is static
 }

};
int test::a=0;
int main(){
    cout<<"Initial value of a = "<<test::a;    //we can directly access the value because static member function is public
    cout<<endl;
    test t1,t2;                                       //objects
    cout<<"Number of objects: "<<test::a;   
}
/*cout<<"Initial value of a = "<<test::gettest();    //we can directly access the member function because static member function is public using getters
    cout<<endl;
    test t1,t2;                                       //objects
    cout<<"Number of objects: "<<test::gettest();  
*/