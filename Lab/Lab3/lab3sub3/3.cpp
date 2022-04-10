#include <iostream>

using namespace std;

class square {

     int length;

 public:

    int getlength(){
    cout<<"Enter the length of the square:"<<endl;
    cin>>length;
    return length;
    }
    int printarea(){
       return length*length;
    }
    int printperimeter(){
        return (4*length);
    }
};
int main()
{
  square s;
  s.getlength();
  cout<<"The area of the square is = "<<s.printarea()<<endl;
  cout<<"The perimeter of the square is = "<<s.printperimeter();
}
