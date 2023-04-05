#include <iostream>
using namespace std;
class sum
{
public:
int value;
	sum operator+(const sum& n)
    {
        sum res;
		res.value = value + n.value;
        return res;
	}
};

int main() 
{
    sum a,b;
	a.value =10;
    b.value =15;
	cout<<a.value+b.value;
	return 0;
}