#include <bits/stdc++.h>
using namespace std;
int count_subset_sum(int arr[], int sum, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1));
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (j == 0)
            {
                dp[i][j] = 1;
            }
            if (i == 0)
            {
                if (j != 0)
                {
                    dp[i][j] = 0;
                }
            }
            else if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] + dp[i - 1][j];
            }
            else if (arr[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][sum];
}
// sum(s1)-sum(s2)=diff........(1)
// sum(s1)+sum(s2)=sum(arr).......(2)
// adding two equations (1)+(2)
// 2*sum(1)=diff+sum(arr)
// sum(s1)={diff+sum(arr)}/2
// if I find the count of sum(s1), i find the count of the diff in the given array
int diff_count(int arr[], int diff, int n)
{
    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr_sum = arr_sum + arr[i];
    }
    int sub1 = (diff + arr_sum) / 2;
    return count_subset_sum(arr, sub1, n);
}
int main()
{
    int n;
    cout << "enter how many numbers: " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int diff;
    cout << "enter the diff: " << endl;
    cin >> diff;
    cout << diff_count(arr, diff, n);
}