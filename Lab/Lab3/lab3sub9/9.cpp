#include <iostream> 
using namespace std;


class Student{
   string name;
   int marksArray[5];
   int total = 0;
   int tmax;
   int average;
   int num;
public: 
   void assign(){
   
   cout<<"Enter the name of the student:"<<endl;
   cin>>name;
   cout<<"Enter the total number of subjects:"<<endl;
   cin>>num;
   for (int i=0;i<num;i++){
   cout<<"Enter the marks:"<<endl;
   cin>>marksArray[i]; 
}

   }
   void compute(){
  for (int i=0;i<num;i++){
    total = total + marksArray[i];
    }
    average = total/num; 
    }
   void display(){
   
    cout <<"The name of the student is = "<<name<<endl;
    cout <<"The total marks = "<<total<<endl; 
    cout <<"The average marks of the student is = "<<average;
}
};

int main(){

Student s;
s.assign();
s.compute();
s.display();

}