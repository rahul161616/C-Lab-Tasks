#include <iostream>

using namespace std;
inline float conversion(float);


int main()
{
    float a;
    cout<<"Enter the value in K.G:"<<endl;
    cin>>a;
    cout << "The answer is = " <<conversion(a);
    return 0;
}
inline float conversion(float V){
   return (V/0.453593);
}