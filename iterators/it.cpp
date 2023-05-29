#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {5, 6, 10, 69, 58};
    vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++)
        cout << *it << endl;
}