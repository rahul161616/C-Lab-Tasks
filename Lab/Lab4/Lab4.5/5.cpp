#include<iostream>

using namespace std;

class Interest
{
private:
    float principle;
    float time;
    float rate;
public:
    Interest(int r);
    ~Interest();
};

Interest::Interest(int r)
{
    rate = r;
    principle = 10000;
    time=2;
    cout<<"The Simple interest is = "<<(principle*time*rate/100)<<endl;
}

Interest::~Interest()
{
    cout << "The Simple interest is = " << (principle* time * rate / 100);
}

int main()
{
    Interest i(4);
    return 0;
}
