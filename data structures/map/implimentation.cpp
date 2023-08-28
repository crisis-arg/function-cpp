#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "argha";
    m[5] = "crisis";
    m[3] = "cross";
    for (auto curr = m.begin(); curr != m.end(); curr++)
    {
        cout << curr->first << " " << curr->second << endl;
    }
}