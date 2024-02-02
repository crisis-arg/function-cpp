#include <bits/stdc++.h>
using namespace std;
vector<int> sequentialDigits(int low, int high)
{
  vector<int> a;
  for (int i = 1; i <= 9; i++)
  {
    int num = i;
    int nextdig = i + 1;
    while (nextdig <= 9 && num <= high)
    {
      num = num * 10 + nextdig;
      if (num >= low && num <= high)
      {
        a.push_back(num);
      }
      nextdig++;
    }
  }
  sort(a.begin(), a.end());
  return a;
}
