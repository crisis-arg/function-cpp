#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the num row: " << endl;
    int n;
    int a = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << min(2 * i - j, j) + i - 1 << " ";
        }

        cout << endl;
    }
    return 69;
}