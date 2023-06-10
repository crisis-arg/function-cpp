#include <bits/stdc++.h>
using namespace std;
int unbounded_knapsack(int coins[], int w, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(w + 1));
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0)
            {
                dp[i][j] = INT_MAX - 1;
            }
            if (j == 0)
            {
                if (i != 0)
                {
                    dp[i][j] = 0;
                }
            }
            else if (i > 1 && coins[i - 1] <= j)
            {
                dp[i][j] = min(dp[i][j - coins[i - 1]] + 1, dp[i - 1][j]);
            }
            else if (i > 1 && coins[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            if (i == 1 && (j % coins[0]) == 0)
            {
                dp[i][j] = j / coins[0];
            }
            else if (i == 1 && (j % coins[0]) != 0)
            {
                dp[i][j] = INT_MAX - 1;
            }
        }
    }
    return dp[n][w];
}
int main()
{
    int n;
    cout << "enter the total num of coins: " << endl;
    cin >> n;
    int coins[n];
    int w;
    cout << "enter the value of coins: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    cout << "enter the weight of the knapsack: " << endl;
    cin >> w;
    cout << unbounded_knapsack(coins, w, n);
}
