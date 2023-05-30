#include <bits/stdc++.h>
using namespace std;
int main()
{
   map<int, int> m;
   m[1] = 30;
   m[6] = 40;
   m[2] = 50;
   m[3] = 60;
   for (auto it : m)
   {
      it.second++;
      cout << it.second << endl;
   }
}