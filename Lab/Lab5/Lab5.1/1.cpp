#include<iostream>

using namespace std;

class Room
{
    private:
     int length;
     int breadth;

     public:
      int area(int len,int bre)
      {
        length=len;
        breadth=bre;
        int area=length*breadth;
        return area;
      }
};
class BedRoom : public Room
{
    private:
    int height;
    int length;
    int breadth;

    public:

    void setData(int len,int bre,int hei)
    {
        length = len;
        breadth = bre;
        height = hei;
    }
    int volume()
    {
        return length*breadth*height;
    }
};
int main()
{
    BedRoom  B;
    int len,bre,hei;
    cout<<"Enter the length:";
    cin>>len;
    cout<<"Enter the breadth:";
    cin>>bre;
    cout<<"Enter the height:";
    cin>>hei;
    B.setData(len,bre,hei);
    cout<<"The area is ="<<B.area(len,bre)<<endl;
    cout<<"The volume is = "<<B.volume();
    }