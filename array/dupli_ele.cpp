#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int j = 0;
    int chk = 0;
    int temp_arr[j];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            temp_arr[j] = i;
            j++;
            chk++;
        }
    }
    if (chk > 0)
    {
        for (int i = 0; i < chk; i++)
        {
            cout << temp_arr[i] << " ";
        }
    }
    else
    {
        cout << -1;
    }
}