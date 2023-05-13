#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int f = min(j, n - j + 1);
            int g = min(i, n - i + 1);
            cout << min(g, f) << " ";
        }
        cout << endl;
    }
}
