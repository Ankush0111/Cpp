#include<iostream>
using namespace std;
class student
{
	int id;
	char name[100];
	public:
		void details()
		{
			cout<<"Enter id-";
			cin>>id;
			cout<<"Enter name-";
			cin>>name;
		}
		void display()
		{
			cout<<id<<endl<<name<<endl;
		}
};
class student1:private student
	{
		int fees;
		char course[100];
		public:
		void details1()
		{
			details();
			cout<<"Enter the course name-";
			cin>>course;
			cout<<"Enter the course fees-";
			cin>>fees;
		}	
		void display1()
		{
			display();
			cout<<course<<endl<<fees<<endl;
		}
	};
class student2:private student1
	{
		int dur;
		char ins[100];
		public:
		void details2()
		{
			details1();
			cout<<"Enter the institute name-";
			cin>>ins;
			cout<<"Enter the course duration-";
			cin>>dur;
		}	
		void display2()
		{
			display1();
			cout<<ins<<endl<<dur<<endl;
		}
	};
	int main()
	{
		student2 s;
		s.details2();
		s.display2();
		return 0;
	}

