#include<iostream>
#include<string.h>

using namespace std;

class Mountain{   
     int height;
     string name;
     string location;
  public:
  Mountain() : name(""),height(0),location("") {}
  Mountain(int hei,string nameOfTheMountain,string loc)
  {
       height =hei;
       name=nameOfTheMountain;
       location=loc;
  }
   Mountain CmpHeight(Mountain m1,Mountain m2)
  {  
              Mountain m;
      if (m1.height>m2.height)
      {
          m.name = m1.name;
          m.location = m1.location;
          m.height = m1.height;
      }
      else{
          m.name = m2.name;
          m.location = m2.location;
          m.height = m2.height;
      }
                return m;
  }
  void displayInfo(){
    cout<<name<<endl;
    cout<<height<<endl;
    cout<<location<<endl;
  }

};
int main()
{
   

    Mountain mtn1(10, "Saagarmatha", "solukhumbu"), mtn2(1, "Annapurna", "Pokhara"),m;
   m = m.CmpHeight(mtn1,mtn2);
   m.displayInfo();
}