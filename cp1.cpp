#include<iostream>
using namespace std;
class Student{
	public:
		int marks;
		string roll,name,branch,phone;
		Student(string n,string b,string ph,string r,int m)
		{
			this->name=n;
			this->branch=b;
			this->phone=ph;
			this->roll=r;
			this->marks=m;
		}
		void display()
		{
			cout<<name<<" "<<branch<<" "<<phone<<" "<<roll<<" "<<marks<<" "<<endl;
		}
};


int main()
{
	Student s1("jitya","cse","1234567890","22mh1a05g2",94);
	s1.display();
	return 0;
	
}
