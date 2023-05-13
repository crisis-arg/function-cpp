#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the num row: " << endl;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << min(j, i - j + 1) << " ";
        }
        cout << endl;
    }
    return 69;
}