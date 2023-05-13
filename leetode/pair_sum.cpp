
#include <bits/stdc++.h>
using namespace std;
bool pair_sum(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arr[i] + arr[j] == x)
            {
                return true;
            }
            if (arr[i] + arr[j] > x)
            {
                break;
            }
        }
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter value" << endl;
    int x;
    cin >> x;
    sort(arr, arr + n);
    cout << pair_sum(arr, n, x);
}