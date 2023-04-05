#include<iostream>
using namespace std;
class duck
{
	private:
		int a,b,flag;
		public:
			duck()
			{
				flag=0;
			}
			void input();
			void cal();
			void display();	
};
void duck::input()
{
	cout<<"enter the number to check duck number-";
	cin>>a;
}
void duck::cal()
{
	b=a;
	while(a!=0)
	{
		if(a%10==0)
		{
			flag=1;
			break;
		}
		a/=10;
	}
}
void duck::display()
{
	if(b>0&&flag==1)
	cout<<"Duck number!"<<endl;
	else
	cout<<"Not Duck number!"<<endl;
}
int main()
{
	duck m;
	m.input();
	m.cal();
	m.display();
	return 0;
}
