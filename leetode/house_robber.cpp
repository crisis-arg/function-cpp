#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int prev2 = 0, prev = nums[0];

    for (int i = 1; i < n; i++)
    {
        int pick = nums[i] + prev2;
        int notPick = 0 + prev;

        int curr = max(pick, notPick);
        prev2 = prev;
        prev = curr;
    }

    cout << prev;
}