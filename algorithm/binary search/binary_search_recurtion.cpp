#include <bits/stdc++.h>
using namespace std;
int bs(int arr[], int start, int end, int x)
{
    int mid = (start + end) / 2;
    if (start > end)
    {
        return -1;
    }
    if (arr[mid] == x)
    {
        return mid;
    }
    if (x < arr[mid])
    {
        return bs(arr, start, mid - 1, x);
    }
    if (x > arr[mid])
    {
        return bs(arr, mid + 1, end, x);
    }
}
int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums, nums + n);
    int target;
    cin >> target;
    cout << bs(nums, 0, n - 1, target);
}