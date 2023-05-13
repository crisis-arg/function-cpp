#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dec = 0;
    int weight = 1;
    while (n > 0)
    {
        int rem = n % 10;
        dec = dec + rem * weight;
        weight = weight * 2;
        n = n / 10;
    }
    cout << dec;
}
