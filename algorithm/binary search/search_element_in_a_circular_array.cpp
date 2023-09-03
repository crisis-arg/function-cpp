#include <bits/stdc++.h>
using namespace std;
int circular_array_search(int nums[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (x == nums[mid])
        {
            return mid;
        }
        if (nums[mid] <= nums[end])
        {
            if (x > nums[mid] && x <= nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        else if (nums[mid] >= nums[start])
        {
            if (x < nums[mid] && x >= nums[start])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    cout << circular_array_search(arr, n, target);
}