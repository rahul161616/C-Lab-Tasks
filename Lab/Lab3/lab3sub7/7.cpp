#include<iostream>
using namespace std;

class fun{
    static int count;
    int x;
    public:
    fun(){
       cout<<"Enter the value of x:"<<endl;
       cin>>x;
       x++;
       count++;
    }
    void dataItemNumber(){
        cout<<"This function is called =  "<<count<<" times."<<endl;
        cout<<"The value of x is  is =  "<<x;
    }
};
    int fun::count = 0;
int main(){
    fun f1;
    fun f2;
    fun f3;
    f3.dataItemNumber(); 
} 