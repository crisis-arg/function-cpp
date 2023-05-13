#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> image, int n)
{
  n = image.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      swap(image[i][j], image[j][i]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    reverse(image.begin(), image.end());
  }
}
int main()
{
    
}