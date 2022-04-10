//This code hasn't been completed yet!
#include<iostream> 
using namespace std;
class employee{
    string name[30];
    string adress[30]; 
    int phone[2];
    int salary[2];
    int tax[2];
    int calculate(int a){
        int Net_salary = salary - tax;
        return Net_salary;
    };
    public:
    void input(){
    
    for (int i=0;i<2;i++){
    cout<<"Enter the name:"<<endl;
    cin>>name[i];
    cout<<"Enter the adress:"<<endl;
    cin>>adress[i]; 
    cout<<"Enter the phone number :"<<endl;
    cin>>phone[i];
    cout<<"Enter the salary:"<<endl;
    cin>>salary[i];
    cout<<"Enter the tax amount employee pays:"<<endl;
    cin>>tax[i];
    } 
    }
    void output(){
    for(int i=0;i<2;i++){
    cout<<"The name is = "<<name[i]<<endl;
    cout<<"\tThe adress is = "<<adress[i]<<endl;
    cout<<"\tThe adress is = "<<phone[i]<<endl;
    cout<<"\tThe adress is = "<<salary[i]<<endl;
    cout<<"\tThe adress is = "<<tax[i]<<endl;
    cout<<"\tThe net Salary of the employee is = "<<calculate(tax[i]);

    cout<<endl;
    }
    }
};
int main(){

employee e;

e.input();
e.output();
}