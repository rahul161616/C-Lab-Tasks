#include <iostream>

using namespace std;

int main()
{
    int a,b,rem=1;
    cout<<"Enter the number to raise the power:"<<endl;
    cin>>a;
    cout<<"Enter the power:"<<endl;
    cin>>b;

     for(int i=1;i<=b;i++){
        rem =(a*rem);
     }
     cout<<"The required answer is = "<<rem;
     
      return 0;
    
}