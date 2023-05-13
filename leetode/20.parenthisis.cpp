#include <bits/stdc++.h>
using namespace std;
bool solve(string s)
{
    string a = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            a = a + s[i];
        }
        if (s[i] == ')')
        {
            if (a.length() > 0 && a[a.length() - 1] == '(')
            {
                a.pop_back();
            }
            else
            {
                return false;
            }
        }
        if (s[i] == '}')
        {
            if (a.length() > 0 && a[a.length() - 1] == '{')
            {
                a.pop_back();
            }
            else
            {
                return false;
            }
        }
        if (s[i] == ']')
        {
            if (a.length() > 0 && a[a.length() - 1] == '[')
            {
                a.pop_back();
            }
            else
            {
                return false;
            }
        }
    }
    return a.length() == 0;
}
int main()
{
    string s;
    cin >> s;
    bool result = solve(s);
    cout << (result ? "true" : "false");
}
