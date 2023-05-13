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
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j <= (i / 2))
            {
                cout << j
                     << " ";
            }
            else
            {
                cout << i - j + 1 << " ";
            }
        }
        cout << endl;
    }
    return 69;
}
