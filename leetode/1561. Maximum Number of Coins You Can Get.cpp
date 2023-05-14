#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int piles[n];
    for (int i = 0; i < n; i++)
    {
        cin >> piles[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << piles[i] << " ";
    }
    cout << endl;
    sort(piles, piles + n);
    for (int i = 0; i < n; i++)
    {
        cout << piles[i] << " ";
    }
    cout << endl;
    int sum = 0;
    for (int i = 1; i <= n / 3; i++)
    {
        sum += piles[n - (i + i)];
    }
    cout << sum;
}