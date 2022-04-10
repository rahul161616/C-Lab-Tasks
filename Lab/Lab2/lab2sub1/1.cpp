#include <iostream>

using namespace std;

inline int multiply(int ,int );

int main()
{
    int x,y;
    cout<<"Enter the two numbers:"<<endl;
    cin>>x>>y;
    cout <<"The product is = "<<multiply(x,y);
    return 0;
}
 inline multiply(int a,int b){
    return a*b;
    }