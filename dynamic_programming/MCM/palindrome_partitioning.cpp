#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(10, vector<int>(10, -1));
bool is_palindrome(string s, int i, int j)
{
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
            i++;
            j--;
        }
        return true;
    }
}
int matrix_chain(string s, int i, int j)
{
    if (i >= j)
    {
        return 0;
    }
    if (is_palindrome(s, i, j) == true)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    dp[i][j] = INT_MAX;
    for (int k = i; k < j; k++)
    {
        dp[i][j] = min(
            dp[i][j],
            matrix_chain(s, i, k) +
                matrix_chain(s, k + 1, j) +
                1);
    }
    return dp[i][j];
}
int main()
{
    string s;
    getline(cin, s);
    cout << matrix_chain(s, 0, s.length() - 1);
}