#include <iostream>

using namespace std;

int main()
{
    int i,num,counter=0;

    cout << "Enter the number:" <<endl;
    cin>>num;

    for (i=1;i<=num;i++){
         if (num%i==0){
        counter++;
    }                                           // the given number is divided from 1 to it's own value and check if is divisible
    }                                        //if is divisible then we get remainder as 0 and we count how many times we get zero by increasing the value from
    if (counter==2){                         //0 adn if we have count more than two means the number i divisible by multiple numbers(i.e has many factors) so is prime
        cout<<"The number is prime"<<endl;  //else the number is composite
    }
    else{
        cout<<"The number is composite"<<endl;
    }

    return 0;
}
