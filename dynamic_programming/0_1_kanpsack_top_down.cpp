#include <bits/stdc++.h>
using namespace std;
// vector<vector<int>> dp(10, vector<int>(10,-1));
int knapsack(int val[], int wt[], int w, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (wt[i - 1] <= j)
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }
            else if (wt[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][w];
}
int main()
{
    int n;
    cout << "enter the total item num: " << endl;
    cin >> n;
    int val[n];
    int wt[n];
    int w;
    cout << "enter the values of items: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    cout << "enter the weight of the items: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    cout << "enter the weight of the knapsack: " << endl;
    cin >> w;
    cout << knapsack(val, wt, w, n);
}