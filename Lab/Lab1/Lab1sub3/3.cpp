#include <iostream>

using namespace std;

int main()
{
    int a,b,rem=1;
    cout<<"Enter the number to raise the power:"<<endl;
    cin>>a;
    cout<<"Enter the power:"<<endl;
    cin>>b;

     for(int i=1;i<=b;i++){            //b is limit if b=3 2*2*2
        rem =(a*rem);                  // main logic for powering the given number
     }                                 // if a = 2 rem = 2*1 rem = 2 next 2*a 2*2 = 4
     cout<<"The required answer is = "<<rem;
     
      return 0;
    
}