#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "enter a number:" << endl;
    int n;
    cin >> n;
    if (n % 6 == 0)
    {
        cout << "the number is divisable by 6" << endl;
    }
    if (n % 3 == 0)
    {
        cout << "the number is divisable by 3";
    }
    else
    {
        cout << "not divisavble";
    }
    return 0;
}