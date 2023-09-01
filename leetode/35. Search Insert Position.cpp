#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int> &nums, int x)
{
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] == x)
        {
            return mid;
        }
        else if (nums[mid] > x)
        {
            end = mid - 1;
        }
        else if (nums[mid] < x)
        {
            start = mid + 1;
        }
    }
    return start;
}
int main()
{
}
