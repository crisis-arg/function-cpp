#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(10, vector<int>(10, -1));
int matrix_chain(int arr[], int i, int j)
{
    if (i == j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    dp[i][j] = INT_MAX;
    for (int k = i; k < j; k++)
    {
        dp[i][j] = min(
            dp[i][j],
            matrix_chain(arr, i, k) +
                matrix_chain(arr, k + 1, j) +
                arr[i - 1] * arr[k] * arr[j]);
    }
    return dp[i][j];
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