#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 0;
    cin >> a;
    int cnt = 1;
    while (cin >> b)
    {
        if (a == b)
        {
            ++cnt;
        }
        else
        {
            cout << cnt << endl;
            a = b;
            cnt = 1;
        }
    }
    cout << cnt;
    return 0;
}