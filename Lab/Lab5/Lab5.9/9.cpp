#include <iostream>

using namespace std;

class Staff
{
private:
    string name;
    string adress;
    string post;

public:
  Staff ():name(""),adress(""),post(""){}
    Staff(string nameOfStaff)
    {
        name = nameOfStaff;
    }
    string getAdress()
    {
        return adress;
    }
    void setAdress(string adressOfStaff)
    {
        adress = adressOfStaff;
    }
    string getPost()
    {
        return post;
    }
    void setPost(string postOfStaff)
    {
        post = postOfStaff;
    }
};

class NonTeaching : virtual public Staff
{
    string name;
    string adress;
    string post;

public:
  NonTeaching ():name(""),adress(""),post(""){}
    NonTeaching(string nameOfNonTeaching)
    {
        name = nameOfNonTeaching;
    }
    string getNameOfNonTeaching()
    {
        return name;
    }
    string getAdressN()
    {
        return adress;
    }
    void setAdressN(string adressOfNonTeachingStaff)
    {
        this->adress = adressOfNonTeachingStaff;
    }
    string getPostN()
    {
        return post;
    }
    void setPostN(string postOfNonTeachingStaff)
    {
        post = postOfNonTeachingStaff;
    }
};
class Teaching : virtual public Staff
{
    string name;
    string adress;
    string department;

public:
    Teaching() : name(""), adress(""), department("") {}
    Teaching(string nameOfNonTeaching)
    {
        name = nameOfNonTeaching;
    }
    string getNameT()
    {
        return name;
    }
    string getAdressT()
    {
        return adress;
    }
    void setAdressT(string adressOfTeachingStaff)
    {
        this->adress = adressOfTeachingStaff;
    }
    string getDepartmentT()
    {
        return department;
    }
    void setDepartmentT(string departmentOfTeachingStaff)
    {
        department = departmentOfTeachingStaff;
    }
};
class Admin : public NonTeaching, public Teaching
{
    string nameOfStaffX;
    int workingHours;

public:

   Admin (string nameOfStaff):Staff(nameOfStaff)
   {
      nameOfStaffX=nameOfStaff;
   }
   string getStaffname()
   {
    return nameOfStaffX;
   }

    void setWorkingHoursStaff(int ws)
    {
        workingHours = ws;
    }
    int getWorkingHoursStaff()
    {
        return workingHours;
    }
    void setWorkingHoursOfNonTeachingStaff(int wnt)
    {
        workingHours = wnt;
    }
    int getWorkingHoursOfNonTeachingStaff()
    {
        return workingHours;
    }
    void setWorkingHoursOfTeachingStaff(int wts)
    {
        workingHours = wts;
    }
    int getTeachingHoursOfTeachingStaff()
    {
        return workingHours;
    }
};
int main()
{
    Admin a();

    a.setAdress("GCES");
    a.setAdressN("Lamachaur");
    a.setAdressT("Chauthey");


    a.setWorkingHoursStaff(10);
    a.setWorkingHoursOfNonTeachingStaff(20);
    a.setWorkingHoursOfTeachingStaff(30);

    a.setNameOfNonTeachingStaff("ALbatross");
    a.setPost("Mechanical Adjustsments");
    a.setPostN("Administration");
    a.setDepartmentT("Programming");

    cout << "\nName Of The Staff:" << a.getName() << endl;
    cout << "Adress Of The staff:" << a.getAdress() << endl;
    cout << "Post Of The Staff:" << a.getPost() << endl;
    cout << "Working Hours Of The Staff:" << a.getWorkingHoursStaff() << endl;
    cout << endl;
    cout << "\nName Of The Non Teaching Staff:" << a.getNameN() << endl;
    cout << "Adress Of The Non Teaching Staff:" << a.getAdressN() << endl;
    cout << "Post Of The Non Teaching Staff:" << a.getPostN() << endl;
    cout << "Working Hours Of The Non Teaching Staff:" << a.getWorkingHoursOfNonTeachingStaff() << endl;
    cout << endl;
    cout << "\nName Of The Teaching Staff:" << a.getNameT() << endl;
    cout << "Adress Of The Teaching Staff:" << a.getAdressT() << endl;
    cout << "Department Of The Teaching Staff:" << a.getDepartmentT() << endl;
    cout << "Working Hours Of The Teaching Staff:" << a.getWorkingHoursStaff() << endl;
    cout << endl;

    return 0;
}