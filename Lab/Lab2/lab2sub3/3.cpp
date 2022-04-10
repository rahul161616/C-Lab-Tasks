#include <iostream>

using namespace std;

inline float conversion(float);                //function prototype float type supporting decimal values (one arguement)

int main()
{
    float a;
    cout<<"Enter the value in Fahrenheit"<<endl;
    cin>>a;
    cout << "The value in Celsius is = " <<conversion(a);        //function calling with passing one arguement

}
inline float conversion(float F){       //called function
    return (F-32)*5/9;                 //oneline statement
}