#include <iostream>

using namespace std;


//inline function means the function should  have (only) one line statement

inline int multiply(int ,int );    //function prototype (has two arguements) both of int type 

int main()
{
    int x,y;
    cout<<"Enter the two numbers:"<<endl;
    cin>>x>>y;
    cout <<"The product is = "<<multiply(x,y);   //main will scan x and y and pass while calling the function itself multiply(x,y)
    return 0;
}
 inline int multiply(int a,int b){   //int a will catch x and int b will catch y and return a*b to multiply(x,y)
    return a*b;    //only one line statement
    }