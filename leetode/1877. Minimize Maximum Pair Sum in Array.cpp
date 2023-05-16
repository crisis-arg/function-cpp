#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n / 2; i++)
    {
        ans = max(ans, nums[i] + nums[n - i - 1]);
    }
    cout << ans;
}