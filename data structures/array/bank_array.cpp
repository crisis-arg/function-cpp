#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cin >> n;
    int balance[n];
    int deposite[n];
    for (int i = 0; i < n; i++)
    {
        cin >> deposite[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            balance[i] = deposite[i];
            continue;
        }
        balance[i] = balance[i - 1] + deposite[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << balance[i] << endl;
    }
}
