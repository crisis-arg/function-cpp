#include <bits/stdc++.h>
using namespace std;
int main()
{
    int val;
    cout << "enter the number of rows" << endl;
    cin >> val;
    for (int i = val; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}