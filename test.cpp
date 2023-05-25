#include <bits/stdc++.h>
using namespace std;
int count_rotation(int nums[], int n)
{
   int start = 0;
   int end = n - 1;
   while (start <= end)
   {
      if (nums[start] <= nums[end])
      {
         return start;
      }
      int mid = (start + end) / 2;
      int next = (mid + 1) % n;
      int prev = (mid - 1) % n;
      if (nums[mid] <= nums[next] && nums[mid] <= nums[prev])
      {
         return mid;
      }
      else if (nums[mid] >= nums[start])
      {
         start = mid + 1;
      }
      else if (nums[mid] <= nums[end])
      {
         end = mid - 1;
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
   int count = count_rotation(arr, n);
   cout << "the rotation of the array is " << count << endl;
}