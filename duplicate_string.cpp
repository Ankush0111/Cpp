#include<iostream>
using namespace std;
string str(string s) 
{
    if(s.length() == 0)
    return "";

    char c = s[0];
    string ans = str(s.substr(1));
    if(c==ans[0])
        return ans;
    else 
        return (c+ans);
}
int main()
{
    cout<<str("aabba")<<endl;
    return 0;
}