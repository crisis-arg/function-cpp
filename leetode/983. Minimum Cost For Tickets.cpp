#include <bits/stdc++.h>
using namespace std;
int min_cost(vector<int> days, vector<int> cost)
{
    int n = days.size();
    vector<int> dp(n + 1, INT_MAX);
    dp[n] = 0;
    for (int k = n - 1; k >= 0; k--)
    {
        int opt1 = cost[0] + dp[k + 1];
        int i;
        for (i = k; i < n && days[i] < days[k] + 7; i++)
            ;

        int opt2 = cost[1] + dp[i];

        for (i = k; i < n && days[i] < days[k] + 30; i++)
            ;

        int opt3 = cost[2] + dp[i];

        dp[k] = min(opt1, min(opt2, opt3));
    }
    return dp[0];
}
int main()
{
    int n;
    cin >> n;
    vector<int> days(n);
    vector<int> cost(3);
    for (int i = 0; i < n; i++)
    {
        cin >> days[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> cost[i];
    }
    cout << min_cost(days, cost);
}