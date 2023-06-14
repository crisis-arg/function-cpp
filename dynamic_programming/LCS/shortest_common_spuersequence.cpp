#include <bits/stdc++.h>
using namespace std;
int lcs(string x, string y, int n, int m)
{
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
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
    return m + n - dp[n][m];
}
int main()
{
    string x, y;
    int n, m;
    cout << "enter the length of the 1st string: " << endl;
    cin >> n;
    cout << "enter the string: " << endl;
    cin >> x;
    cout << "enter the length of the 2nd string: " << endl;
    cin >> m;
    cout << "enter the string: " << endl;
    cin >> y;
    cout << lcs(x, y, n, m);
}