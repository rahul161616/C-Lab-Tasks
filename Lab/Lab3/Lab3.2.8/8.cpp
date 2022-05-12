#include<iostream>

using namespace std;

class Bank{
    string nameOfTheDepositor;
    float accountNumber;
    string typeOfAccount;
    float balanceAmount;
 
 public:

    void initialValues()
    {
       cout<<"Enter your name:"<<endl;
       cin>>nameOfTheDepositor;
       cout << "Enter your the account number" << endl;
       cin >> accountNumber;
       cout<<"Enter the type of account you want to open:"<<endl;
       cin>>typeOfAccount;
       cout << "Enter the amount to deposit:" << endl;
       cin >> balanceAmount;
    }

   void depositAmount()
   {
       float depositAmount;
         cout<<"Enter the amount to deposit:"<<endl;
         cin>>depositAmount;
         balanceAmount = balanceAmount+depositAmount;
    }

    void withdrawAmount()
    {
        float desiredAmount,amountWithdrawn;
        cout<<"Your current balance is :Rs  "<<balanceAmount<<endl;
         cout<<"Enter the amount you want to withdraw:"<<endl;
         cin>>desiredAmount;
         
         amountWithdrawn = balanceAmount-desiredAmount;

         cout<<"Your amount after withdrawl is = "<<amountWithdrawn<<endl;
         balanceAmount=amountWithdrawn;
    }

    void check()
    {
        cout<<"Account Holder : "<<nameOfTheDepositor<<endl;
        cout<<"Balance Amount :"<<balanceAmount<<endl;
    }

};
//Function Menu display
int function1()
{
    int N;
cout<<"*****************************************************"<<endl;
cout <<"Press 1 to create an account"<<endl;
cout <<"Press 2 to deposit the amount"<<endl;
cout << "Press 3 to view the balance and withdraw the amount" << endl;
cout << "Press 4 to display name and balance" << endl;
cout<<"*****************************************************"<<endl;

cout<<"\nWhat do you want to do?"<<endl;
cin>>N;
return N;

}

// Function Menu display
void function2()
{
    cout << "\n*****************************************************" << endl;
    cout << "Deposit the amount" << endl;
    cout << "View the balance and withdraw the amount" << endl;
    cout << "Display name and balance" << endl;
    cout<<"*****************************************************"<<endl;
}

int main()
{
    int n;

    //Bank B[10];   //Running array to perfomrm desired program for 10 customers!
    Bank B;

switch (function1())
{
case 1:
    int f2;
    B.initialValues();
    int x;
    cout<<"\nDo you want to perform following actions(1 for yes and 0 for no)?"<<endl;
    function2();
    cin>>f2;
    if (f2==0)
    {
       cout<<"Thankyou"<<endl;
    }
    else if (f2==1)
    {
  
    cout << "\nPress 2 to deposit the amount" << endl;
    cout << "Press 3 to view the balance and withdraw the amount" << endl;
    cout << "Press 4 to display name and balance" << endl;
    cin>>x;

    }
    else {
    cout<<"Thankyou!"<<endl;
    exit(0);
    }
    switch (x)
    {
    case 2:
        B.depositAmount();
        B.check();
        break;
    case 3:
        B.withdrawAmount();
        B.check();
        break;
    case 4:
        B.check();
        break;
    default:
        cout<<"Thankyou!"<<endl;
        break;
    }
    break;
case 2:
    B.depositAmount();
    break;
case 3:
    B.withdrawAmount();
    break;
case 4:
    B.check();
    break;
default:
    cout<<"Invalid Entry!!"<<endl;
    break;
}
}
