#include<iostream>

using namespace std;

class class1
{
    private:
    int x;

    public:
    int getX()
    {
        return x;
    }
    void setX(int a)
    {
       x=a; 
    }
};

class class2
{
    private:
    int y;

    public:

    void setY(int b)
    {
       y=b; 
    }

    int getY()
    {
        return y;
    }
    
};

class class3:public class1,public class2
{

   int z;
public:
   int add()
   {
       z= getX()+getY();
       return z;
   }
};

int main()
{
    class3 C3;

    int x,y;

    cout<<"Enter the 1st number:";
    cin>>x;
    cout<<"Enter the 2nd number";
    cin>>y;

    C3.setX(x);
    C3.setY(y);
    cout<<"The sum is = "<<C3.add();
    return 0;
}
