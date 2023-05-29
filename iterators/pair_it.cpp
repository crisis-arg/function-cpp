#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<pair<int, int>> arr = {{5, 6}, {10, 69}, {58, 50}};
   vector<pair<int, int>>::iterator it;
   for (it = arr.begin(); it != arr.end(); it++)
      cout << (*it).first << " " << (*it).second << endl;
}