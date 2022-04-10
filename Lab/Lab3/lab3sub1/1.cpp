#include <iostream>

using namespace std;

class car{
     char name;
     int model;
 public:
    int horsePower;
    int getHorsePower(int horsePower){
       return horsePower;
    }
    void sethorsePower(){
       this ->horsePower = horsePower;
    }
    string getName(string name){
      return name;
    }
    void setName(){
     this-> name = name;
    }

    int getModel(int model){
      return model;
      }
    void setModel(){
     this->model= model;
    }
};


int main()
{
    car c;
    string name;
    int model,horsePower;
    cout<<"Enter the model:"<<endl;
    cin>>model;
    cout<<"Enter the name:"<<endl;
    cin>>name;
    cout<<"Enter the power:"<<endl;
    cin>>horsePower;
    //c.setModel(model);
     cout<<"The name of the car is = "<<c.getName(name)<<endl;
    cout <<"The model of the car is = "<<c.getModel(model)<<endl;
    cout<<"The horse power of the car is = "<<c.getHorsePower(horsePower)<<endl;

    return 0;
}