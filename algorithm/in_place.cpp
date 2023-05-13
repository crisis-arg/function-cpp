#include <bits/stdc++.h>
using namespace std;
void reverse_array(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    swap(arr[n - i - 1], arr[i]);
  }
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
  reverse_array(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
