#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
   string name;
   int id;
   float salary;

   public:
   void setString(string str){
    name=str;
   }
   string getString()
   {
    return name;
   }
      void setId(int i_d){
    id=i_d;
   }
   int getId()
   {
    return id;
   }
   void setSalary(int wage)
   {
       salary = wage;
   }
   int getSalary()
   {
       return salary;
   }
};
class Company{
     string company_name;
     string company_location;
     public:
     Employee e;
     void setCompanyName(string cname){
    company_name=cname;
   }
   string getCompanyName()
   {
    return company_name;
   }
    void setCompanyLocation(string cadd){
    company_location=cadd;
   }
   string getCompanyLocation()
   {
    return company_location;
   }
   void display()
   {
       cout << "The Employee name is: " << e.getId()<<endl;
       cout << "The Employee Adress is: " << e.getString()<<endl;
       cout<<"The Employee Salary is : "<<e.getSalary()<<endl;
   } 
};
int main()
{
    Company C;
    C.setCompanyName("Origin");
    C.setCompanyLocation("USA");
    C.e.setId(1);
    C.e.setString("robin");
    C.e.setSalary(200000);
    cout<<"The company name is: "<<C.getCompanyName()<<endl;
    cout<<"The company location is: "<<C.getCompanyLocation()<<endl;
    C.display();

    return 0;
}















/*     Employee (string name,int id,float salary)
     {
        this->name=name;
        this->id=id;
        this->salary=salary;
     }
     */