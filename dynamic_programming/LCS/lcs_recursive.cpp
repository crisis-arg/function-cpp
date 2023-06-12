#include <bits/stdc++.h>
using namespace std;
int lcs(string x, string y, int n, int m)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (x[n - 1] == y[m - 1])
    {
        return (1 + lcs(x, y, n - 1, m - 1));
    }
    else if (x[n - 1] != y[m - 1])
    {
        return max(lcs(x, y, n - 1, m), lcs(x, y, n, m - 1));
    }
}
int main()
{
    string x, y;
    int n, m;
    cout << "enter the length of the 1st string: " << endl;
    cin >> n;
    cout << "enter the string: " << endl;
    cin >> x;
    cout << "enter the length of the 2nd string: " << endl;
    cin >> m;
    cout << "enter the string: " << endl;
    cin >> y;
    cout << lcs(x, y, n, m);
}