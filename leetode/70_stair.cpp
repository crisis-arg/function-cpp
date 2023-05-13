#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << n;
    }
    else
    {
        int a = 1;
        int b = 2;
        int c;
        for (int i = 3; i <= n; i++)
        {
            // fibo series
            b = a + b;
            a = b - a;
        }
        cout << b;
    }
}