#include <bits/stdc++.h>
using namespace std;
int matrix_chain(int arr[], int i, int j)
{
    if (i == j)
    {
        return 0;
    }
    int min = INT_MAX;
    for (int k = i; k < j; k++)
    {
        int temp = matrix_chain(arr, i, k) + matrix_chain(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
        if (temp < min)
        {
            min = temp;
        }
    }
    return min;
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
    cout << matrix_chain(arr, 1, n - 1);
}