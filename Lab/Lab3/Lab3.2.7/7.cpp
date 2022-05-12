#include<iostream>

using namespace std;

class DB;
class DM{
       float meters;
       float centimeters;
       public:
      void input(){
          cout<<"Enter the values in metres and centimeters:";
          cin>>meters>>centimeters;
      }

      friend DM sum(DM m,DB b);
};
class DB{
       float feet;
       float inches;
   public:
       void input()
       {
           cout << "Enter the values in metres and centimeters:";
           cin >> feet >> inches;
       }

       friend DM sum(DM m, DB b);
};
DM sum(DM m,DB b){
      DM temp;
      b.feet = b.feet / 0.3048;                        //changing coming feet to meters
      b.inches = b.inches / 2.54;                      //changing coming inches to centimeters
      temp.meters = m.meters+b.feet;
      temp.centimeters = m.centimeters+b.inches;

      cout << "The ans is " << temp.meters << "meters"<< " " << temp.centimeters << "centimeters" << endl;
      }


int main()
{
    DM m;
    DB b;
    m.input();
    b.input();
    sum(m,b);
    return 0;
}
