#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str)
{
    int ans = 0;
    map<char, int> m;
    for (auto s : str)
    {
        if (m.find(s) == m.end())
        {
            m[s] = 0;
        }
        m[s] += 1;
    }
    map<int, int> cntr;
    for (auto i : m)
    {
        int key = i.first;
        int val = i.second;
        if (cntr.find(val) == cntr.end())
        {
            cntr[val] = 0;
        }
        cntr[val] += 1;
    }
    for (auto i : cntr)
    {
        int key = i.first;
        int val = i.second;
        if (val > 1)
        {
            int count = val - 1;
            int target = key;

            while (target > 0 && count > 0)
            {
                if (cntr.find(target) == cntr.end())
                {
                    cntr[target] = 1;
                    ans += key - target;
                    count--;
                }
                target--;
            }
            ans += count * key;
        }
    }
    return ans;
}

int main()
{
}