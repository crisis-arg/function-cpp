#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(10, vector<int>(10, -1));
int knapsack(int val[], int wt[], int w, int n)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }
    if (wt[n - 1] <= w)
    {
        dp[n][w] = max((val[n - 1] + knapsack(val, wt, w - wt[n - 1], n - 1)), knapsack(val, wt, w, n - 1));
        return dp[n][w];
    }
    if (wt[n - 1] > w)
    {
        dp[n][w] = knapsack(val, wt, w, n - 1);
        return dp[n][w];
    }
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