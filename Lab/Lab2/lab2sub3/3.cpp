#include <iostream>

using namespace std;

inline float conversion(float);

int main()
{
    float a;
    cout<<"Enter the value in Fahrenheit"<<endl;
    cin>>a;
    cout << "The value in Celsius is = " <<conversion(a);

}
inline float conversion(float F){
    return (F-32)*5/9;
}