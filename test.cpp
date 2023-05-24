#include <bits/stdc++.h>
using namespace std;
int binary_search(int nums[], int n, int x, bool flag)
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
         if (flag)
         {
            end = mid - 1;
         }
         else
         {
            start = mid + 1;
         }
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
   cout << "enter a sorted array " << endl;
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   int target;
   cout << "enter the num " << endl;
   cin >> target;
   int first_index = binary_search(arr, n, target, true);
   if (first_index == -1)
   {
      cout << "the count of " << target << " is " << 0 << endl;
   }
   else
   {
      int last_index = binary_search(arr, n, target, false);
      cout << "the count of num " << target << " is " << last_index - first_index + 1 << endl;
   }
}