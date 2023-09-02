#include <bits/stdc++.h>
using namespace std;
int find(int index, string s, unordered_map<string, bool> mp, vector<int> dp)
{
    if (index >= s.size())
    {
        return 0;
    }
    if (dp[index] != -1)
    {
        return dp[index];
    }
    string curr = "";
    int res = s.size();
    for (int i = index; i < s.size(); i++)
    {
        curr.push_back(s[i]);
        int extra = curr.size();
        if (mp[curr])
        {
            extra = 0;
        }
        extra += find(i + 1, s, mp, dp);
        res = min(res, extra);
    }
    return res;
}
int minExtraChar(string s, vector<string> dictionary)
{
    unordered_map<string, bool> mp;
    for (auto &word : dictionary)
    {
        mp[word] = true;
    }
    vector<int> dp(s.size(), -1);
    return find(0, s, mp, dp);
}
int main()
{
}