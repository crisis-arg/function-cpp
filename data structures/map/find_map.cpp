#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "argha";
    m[6] = "crisis";
    m[2] = "cross";
    m[3] = "yoo";
    auto it = m.find(6);
    cout << (*it).second;
}