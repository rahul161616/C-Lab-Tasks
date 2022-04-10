#include <iostream>

using namespace std;

int greatest(int ,int ,int );

int main()
{
    int x,y,z;
    cout<<"Enter the three numbers:"<<endl;
    cin>>x>>y>>z;
    cout <<"The greatest is = "<<greatest(x,y,z);
    return 0;
}
 inline greatest(int a,int b,int c){
    return (a > b) ?(a > c ? a : c) :(b > c ? b : c);
    }