#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int partition_index = start;
    for (int i = start; i < end; i++)
    {
        if (pivot >= arr[i])
        {
            int temp = arr[i];
            arr[i] = arr[partition_index];
            arr[partition_index] = temp;
            partition_index++;
        }
    }
    int curr = arr[end];
    arr[end] = arr[partition_index];
    arr[partition_index] = curr;
    return partition_index;
}
void quick_sort(int arr[], int start, int end)
{
    if (start < end)
    {
        int partition_index = partition(arr, start, end);
        quick_sort(arr, start, partition_index - 1);
        quick_sort(arr, partition_index + 1, end);
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
    quick_sort(nums, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}