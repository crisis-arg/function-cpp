#include <bits/stdc++.h>
using namespace std;
int max_sub_sum(vector<int> nums, int k)
{
    int i = 0;
    int j = 0;
    int sum = 0;
    int mx = INT_MIN;
    while (j < nums.size())
    {
        sum = sum + nums[j];
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            mx = max(mx, sum);
            sum = sum - nums[i];
            i++;
            j++;
        }
    }
    return mx;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    cout << max_sub_sum(nums, k);
}