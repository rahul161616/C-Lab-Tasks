#include <iostream>

using namespace std;

int power(int ,int);      //function prototype has two arguements of int type
int main()
{
    int a,b;
    cout<<"Enter the number to raise the power:"<<endl;
    cin>>a;
    cout<<"The ans is = "<<power(a,2);  //on vlue is scanned while other 2 is directly passed 
}
int power(int n,int m){  //called function n has a and m has 2
  int i,rem=1;
     for(i=1;i<=m;i++){
        rem =(n*rem);  // same power logic as lab 1sub3
     }
       return rem;  // will return the remainder as fucntion is int (requires return type)
}

