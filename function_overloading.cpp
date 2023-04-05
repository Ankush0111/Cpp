#include<iostream>
using namespace std;
class sum
{
    private:
    float a,b;
    public:
    void input(int x,int y)
    {
        a=x;
        b=y;
    }
    void dis()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
    sum operator+(const sum obj)
    {
        
    }
};