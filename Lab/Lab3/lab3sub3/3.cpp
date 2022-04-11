#include <iostream> 
using namespace std;


class square{
   
   int length;
   public: 
   int getlength(){
   cout<<"Enter the length of the square:"<<endl;
   cin>>length;
   return length;
}
   void printarea(){ 
   cout <<"The area of the square is = "<<length*length<<endl; 
    }
   void printperimeter(){ 
     cout<<"The perimeter of the square is = "<<4*length<<endl;
}
};

int main(){

square s;
s.getlength();
s.printarea();
s.printperimeter();

}
