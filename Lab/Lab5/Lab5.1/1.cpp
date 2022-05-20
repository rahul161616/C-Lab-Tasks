#include<iostream>

using namespace std;

class Room
{
    protected:
     int length;
     int breadth;

     public:
      void setData(int a ,int b)
      {
          length  = a;
          breadth = b;
      }
      int getNum()
      {
          return length*breadth;
      }
};
class BedRoom : public Room
{
    protected:
    int fieldHeight;

    public:

    void setData(int len,int bre,int hei)
    {
        length = len;
        breadth = bre;
        fieldHeight = hei;
    }
    int volume()
    {
        return length*breadth*fieldHeight;
    }
};
int main()
{
    Room R;
    R.setData(2,3);
    cout<<"The area is = "<<R.getNum()<<endl;
    BedRoom  B;
    B.setData(2,3,4);
    cout<<"The volume is = "<<B.volume();
    
    }