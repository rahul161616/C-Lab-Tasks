#include <iostream>

using namespace std;

inline int greatest(int ,int ,int );

int main()
{
    int x,y,z;
    cout<<"Enter the three numbers:"<<endl;
    cin>>x>>y>>z;
    cout <<"The greatest is = "<<greatest(x,y,z);           //pass greatest(x,y,z) as calling function 
    return 0;
}
 inline int greatest(int a,int b,int c){                  //a catches x b catches y c catches z which is the called function
    return (a > b) ?(a > c ? a : c) :(b > c ? b : c);    //oneline statement will whill return greatest among three
    }