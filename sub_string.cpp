#include<iostream>
using namespace std;
void sub(string s, string a)
{
    if(s.length() == 0)
    {
        cout<<a<<endl;
        return;
    }
    char c = s[0];
    string b = s.substr(1);
    sub(b, a);
    sub(b, a+c); 
}
int main()
{
    sub("abc","");
    cout<<endl;
    return 0;
}