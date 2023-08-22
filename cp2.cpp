#include<iostream>
using namespace std;
class Student{
	private:
		int marks;
		string roll,name,branch,phone;
	public:
		Student(string n,string b,string ph,string r,int m)
		{
			this->name=name;
		 	this->branch=branch;
			this->phone=phone;
		    this->roll=roll;
			this->marks=marks;  
		}
		void modify()
		{
			marks=80;
		    roll="420",name="jyotsna",branch="cse ds",phone="9876543210";
		}
		void display()
		{
			cout<<name<<" "<<branch<<" "<<phone<<" "<<roll<<" "<<marks<<" "<<endl;
		}  
};


int main()
{
	Student s1("jitya","cse","1234567890","22mh1a05g2",94);
	s1.modify();
	s1.display();
	return 0;
	
}
