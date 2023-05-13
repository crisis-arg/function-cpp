
#include <bits/stdc++.h>
using namespace std;
bool pair_sum(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
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
    cout << "enter value";
    int x;
    cin >> x;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << pair_sum(arr, n, x);
}