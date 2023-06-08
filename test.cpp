#include <bits/stdc++.h>
using namespace std;
int gas_station(int gas[], int cost[], int n)
{
  int sum_gas = 0;
  int sum_cost = 0;
  int left_gas = 0;
  int start = 0;
  for (int i=0; i < n; i++)
  {
    sum_gas += gas[i];
    sum_cost += cost[i];
    if (sum_cost > sum_gas)
    {
      return -1;
    }
  }
  for (int i = 0; i < n; i++)
  {
    left_gas = gas[i] - cost[i];
    if (left_gas < 0)
    {
      start = i + 1;
    }
  }
  return start;
}
int main()
{
  int n;
  cin >> n;
  int gas[n];
  int cost[n];
  for (int i = 0; i < n; i++)
  {
    cin >> gas[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> cost[i];
  }
  cout << gas_station(gas, cost, n);
}