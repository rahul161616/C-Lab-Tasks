#include<iostream>

using namespace std;

class AddAmount{
    int amount=50;
    public:
    AddAmount()
    {
         cout<<"\n-No amount added-Current amount = "<<amount<<"$"<<endl;
    }
    AddAmount(int add)
    {
         amount += add;
         cout<<"The final amount is = "<<amount<<"$"<<endl;
    }
};
int main()
{
    AddAmount a,b(50);
    return 0;
}