#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the number of row: ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
