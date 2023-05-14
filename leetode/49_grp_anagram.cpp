#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> anagram(vector<string> &strs)
{
    map<string, vector<string>> ans;
    vector<vector<string>> yo;
    for (int i = 0; i < strs.size(); i++)
    {
        string s = strs[i];
        sort(s.begin(), s.end());
        if (ans.find(s) != ans.end())
        {
            ans[s] = {};
        }
        ans[s].push_back(strs[i]);
    }
    for (auto curr = ans.begin(); curr != ans.end(); curr++)
    {
        yo.push_back(curr->second);
    }
    return yo;
}
int main()
{
}
