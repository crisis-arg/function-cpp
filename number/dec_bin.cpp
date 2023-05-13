#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int bin_arr[32];
    int i = 0;
    while (n > 0)
    {
        bin_arr[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << bin_arr[j];
}
