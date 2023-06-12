#include <bits/stdc++.h>
using namespace std;
vector<int> subset_sum(int arr[], int sum, int n)
{
  vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1));
  for (int i = 0; i < n + 1; i++)
  {
    for (int j = 0; j < sum + 1; j++)
    {
      if (i == 0)
      {
        dp[i][j] = false;
      }
      if (j == 0)
      {
        dp[i][j] = true;
      }
      else if (arr[i - 1] <= j)
      {
        dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
      }
      else if (arr[i - 1] > j)
      {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  vector<int> ans;
  for (int i = 0; i < (sum + 1) / 2; i++)
  {
    if (dp[n][i] == true)
    {
      ans.push_back(i);
    }
  }
  return ans;
}
int min_subset_sum(int arr[], int n)
{
  int range = 0;
  for (int i = 0; i < n; i++)
  {
    range = range + arr[i];
  }
  vector<int> ans;
  ans = subset_sum(arr, range, n);
  int min_sum = INT_MAX;
  for (int i = 0; i < ans.size(); i++)
  {
    min_sum = min(min_sum, range - 2 * ans[i]);
  }
  return min_sum;
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
  cout << min_subset_sum(arr, n);
}