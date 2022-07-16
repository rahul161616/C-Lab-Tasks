#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int roll;
	public:
		void setStudentName(string name)
		{
			this->name = name;
		}
        string getStudentName()
		{
			return name;
		}
        void setRoll(int roll)
        {
            this->roll=roll;
        }
       int getRoll()
        {
            return roll;
        }
		void displayStudentData()
		{
			cout<<"Student's Name : "<<name<<endl;
			cout<<"Student's Rollno : "<<roll<<endl;
		}
};
class Marks{
	private:
	int oop,pm,bc,acc,fin;
	public:
       void setOop(int oop)
        {
            this->oop=oop;
        }
       int getOop()
        {
            return oop;
        }
         void setPm(int pm)
        {
            this->pm=pm;
        }
       int getPm()
        {
            return pm;
        }
        void setBc(int bc)
        {
        this->bc = bc;
        }
        int getBc()
        {
            return bc;
        }
        void setAcc(int acc)
        {
            this->acc=acc;
        }
       int getAcc()
        {
            return acc;
        }
         void setFin(int fin)
        {
            this->fin=fin;
        }
       int getFin()
        {
            return fin;
        }
};

class Result : public Student, public Marks{
	private:
		int total;
		float percent;
	public:
		int totalMarks()
		{
            total = getOop()+getPm()+getAcc()+getBc()+getFin();
			return total;
		 } 
		 
		 float percentage()
		 {
		 	return ((totalMarks()*100)/500);
		 }
		void displayResults()
		{
			cout<<"Total Marks of the Student : "<<totalMarks()<<endl;
			cout<<"Percentage of the Student : "<<percentage()<<endl;
		}
};
int main()
{
	int s1,s2,s3,s4,s5;
	cout<<"Enter the marks:"<<endl;
	cin>>s1>>s2>>s3>>s4>>s5;
	Result r;
	r.setStudentName("Rahul");
    r.setRoll(2);
	r.displayStudentData();
    r.setOop(s1);
    r.setBc(s2);
    r.setPm(s3);
    r.setFin(s4);
    r.setAcc(s5);
	r.percentage();
	r.displayResults();
	return 0;
}