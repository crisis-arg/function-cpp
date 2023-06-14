#include <bits/stdc++.h>
using namespace std;
int lcs(string x, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(n + 1));
    string y = x;
    reverse(y.begin(), y.end());
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (x[i - 1] == y[j - 1])
            {
                dp[i][j] = (1 + dp[i - 1][j - 1]);
            }
            else if (x[i - 1] != y[j - 1])
            {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }
    return dp[n][n];
}
int main()
{
    string x;
    int n;
    cout << "enter the length of the 1st string: " << endl;
    cin >> n;
    cout << "enter the string: " << endl;
    cin >> x;
    cout << lcs(x, n);
}