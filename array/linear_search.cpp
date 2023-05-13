#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int b = -1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a;
    cin >> a;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            b = i;
            break;
        }
    }
    cout << b;
}