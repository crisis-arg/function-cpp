#include <bits/stdc++.h>
using namespace std;
int combinationSum4(vector<int> &nums, int target)
{
    vector<int> dp(target + 1, -1);
    for (int i = 0; i < target; i++)
    {
        if (i == 0)
        {
            dp[i] = 1;
        }
        for (int j = 0; j < nums.size(); j++)
        {
            if (i - nums[j] < 0)
                continue;
            dp[i] += dp[i - nums[j]];
        }
    }
    return dp[target];
}
int main()
{
}