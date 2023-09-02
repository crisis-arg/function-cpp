#include <bits/stdc++.h>
using namespace std;
int min_cost(vector<int> days, vector<int> cost, int index,vector<int>dp)
{
    int n = days.size();
    if (index >= n)
    {
        return 0;
    }
    if (dp[index]!=-1)
    {
        return dp[index];
    }
    int opt1 = cost[0] + min_cost(days, cost, index + 1,dp);
    int i;
    for (i = index; i < n && days[i] < days[index] + 7; i++);
    
    int opt2 = cost[1] + min_cost(days, cost, i,dp);
    
    for (i = index; i < n && days[i] < days[index] + 30; i++);
    
    int opt3 = cost[2] + min_cost(days, cost, i,dp);
    
    dp[index]= min(opt1, min(opt2, opt3));
    return dp[index];
}
int main()
{
    int n;
    cin >> n;
    vector<int>dp(n+1,-1);
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
    cout << min_cost(days, cost,0,dp);
}