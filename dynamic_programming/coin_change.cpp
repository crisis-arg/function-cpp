#include <bits/stdc++.h>
using namespace std;
int unbounded_knapsack(int coins[], int w, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(w + 1));
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
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
            else if (coins[i - 1] <= j)
            {
                dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j];
            }
            else if (coins[i - 1] > j)
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
