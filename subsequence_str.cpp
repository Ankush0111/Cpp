#include <bits/stdc++.h>
using namespace std;
int subs(string s, string s1[])
{
    if (s.empty())
    {
        s1[0] = "";
        return 1;
    }
    string smallstr = s.substr(1);
    int smallout = subs(smallstr, s1);
    for (int i = 0; i < smallout; i++)
    {
        s1[i + smallout] = s[0] + s1[i];
    }
    return 2 * smallout;
}
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int n1 = pow(2, n);
    string *s1 = new string[n1];
    int count = subs(s, s1);
    for (int i = 0; i < count; i++)
    {
        cout << s1[i] << endl;
    }
}