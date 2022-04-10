#include <iostream>


using namespace std;


class large{
    int num1;
    int num2;

public:
    int getNum1(){
    cout << "Enter the number :" << endl;
    cin>>num1;
    return num1;
    }
int getNum2(){
    cout << "Enter the number :" << endl;
    cin>>num2;
    return num2;
    }
   int greatest(){
     return (num1>num2)?num1:num2;
   }
   void put(){
    cout << "The largest number is = " << greatest()<<endl;
   }
};

int main()
{
  large l;
  l.getNum1();
  l.getNum2();
  l.put();
}
