#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long d = 0;
    for (long long i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            d = 1;
            break;
        }
    }
    if (d == 1)
    {
        cout << "not prime";
    }
    else
    {
        cout << "prime";
    }
}
