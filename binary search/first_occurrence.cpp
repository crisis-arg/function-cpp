#include <bits/stdc++.h>
using namespace std;
int binarysearch(int nums[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int result = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] == x)
        {
            result = mid;
            end = mid - 1;
        }
        else if (x < nums[mid])
        {
            end = mid - 1;
        }
        else if (x > nums[mid])
        {
            start = mid + 1;
        }
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int target;
    cout << "enter a sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the num " << endl;
    cin >> target;
    cout << binarysearch(arr, n, target);
}