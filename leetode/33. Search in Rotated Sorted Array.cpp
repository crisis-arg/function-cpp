#include <bits/stdc++.h>
using namespace std;
int search(vector<int> nums, int x)
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
        else if (nums[start] < nums[mid])
        {
            if (x >= nums[start] && x < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (x >= nums[mid] && x < nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
}