#include<iostream>

using namespace std;

class Quadrilateral
{
        int length;
        int breadth;
        public:
    Quadrilateral(int len)
    {
        length = len;
        cout<<"The area of the square is = "<<length*length<<endl;
    }
    Quadrilateral(int len,int bre)
    {
        length = len;
        breadth = bre;
        cout<<"The area of the square is = "<<length*breadth<<endl;
    }

};
int main()
{
    int a,b,c;
    cout<<"Enter the length of the square:"<<endl;
    cin>>c;
    cout<<"Enter the length and breadth of the rectangle:"<<endl;
    cin>>a>>b;
    Quadrilateral q(c),q1(a,b);
    return 0;
}