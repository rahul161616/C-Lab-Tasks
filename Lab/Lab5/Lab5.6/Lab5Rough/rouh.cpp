#include<iostream>

using namespace std;

class A
{
    string name;
    public:
   A(string nameOfSomeone)
   {
         name=nameOfSomeone;
   }
};
class B:public A
{
    string namex;
    public:
    B(string nameOfSomeone):A(nameOfSomeone){
        namex=nameOfSomeone;
    }
    string getName()
    {
        return namex;
    }
   void display()
    {
        cout<<"Hello"<<namex<<endl;
    }

};
int main()
{
    B b("rahul");
    b.display();
   cout<<b.getName()<<endl;
}