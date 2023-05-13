#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp;
    int y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        temp = y[i];
        y[i] = y[n - 1 - i];
        y[n - 1 - i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << y[i] << " ";
    }
}