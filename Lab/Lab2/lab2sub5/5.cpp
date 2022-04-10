#include <iostream>

using namespace std;

int power(int ,int);
int main()
{
    int a,b;
    cout<<"Enter the number to raise the power:"<<endl;
    cin>>a;
    cout<<"The ans is = "<<power(a,2);
}
int power(int n,int m){
  int i,rem=1;
     for(i=1;i<=m;i++){
        rem =(n*rem);
     }
       return rem;
}

