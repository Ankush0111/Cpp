#include<iostream>
using namespace std;
class a
{
    int age;
    char name[100];
    public:
    void details()
    {
        cout << "Enter the age-";
        cin>>age;
        cout << "Enter name-";
        cin>>name;
    }
    void display()
    {
        cout << "name-"<<name<<endl;
        cout << "age-"<<age<<endl;
    }
    
};
class b:private a
	{
		char father[100],city[100];
		public:
		void details1()
		{
			details();
			cout<<"Enter the father name-";
			cin>>father;
			cout<<"Enter the city fees-";
			cin>>city;
		}	
		void display1()
		{
			display();
			cout<<father<<endl<<city<<endl;
		}
	};
    int main()
	{
		b s;
		s.details1();
		s.display1();
		return 0;
	}