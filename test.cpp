#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int start, int end, int x)
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
   else if (arr[mid] < x)
   {
      binarySearch(arr, mid + 1, end, x);
   }
   else if (arr[mid] > x)
   {
      binarySearch(arr, start, mid - 1, x);
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
   cout << binarySearch(nums, 0, n - 1, target);
}