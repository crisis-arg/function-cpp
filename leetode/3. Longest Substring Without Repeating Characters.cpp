#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    vector<int> temp(256, -1);
    int length = 0;
    int start = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (temp[s[i]] > start)
        {
            start = temp[s[i]];
        }
        temp[s[i]] = i;
        length = max(length, i - start);
    }
    return length;
}
int main()
{
}