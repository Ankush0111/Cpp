#include<iostream>
using namespace std;
class sum
{
    private:
    int a,b;
    public:
    void input(int x, int x1)
    {
        a=x;
        b=x1;
    }
    void dis()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
	   sum operator+(const sum obj)
        {
            sum x2;
            x2.a = a + obj.a;
            x2.b = b + obj.b;
            return (x2);
	    }
};
int main() 
{
    sum n,n1,s;
    n.input(10,5);
    n1.input(10,18);
    s=n+n1;
    s.dis();
    return 0;
}