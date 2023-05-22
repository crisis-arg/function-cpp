#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
    }
    return -1;
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
    cout << binarySearch(nums, n, target);
}