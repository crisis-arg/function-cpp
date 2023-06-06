#include <bits/stdc++.h>
using namespace std;
int subset_sum(int arr[], int sum, int n)
{
  vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));
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
  int target;
  cout << "enter the sum: " << endl;
  cin >> target;
  cout << subset_sum(arr, target, n);
}