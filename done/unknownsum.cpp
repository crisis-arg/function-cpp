#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 0;
    while (cin >> b)
    {
        a += b;
        if (b == -1)
            break;
    }
    cout << "the sum of the numbers is  " << a;

    return 0;
}