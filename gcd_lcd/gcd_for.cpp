#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    int n;
    cin >> n;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        result = gcd(result, temp);
    }
    cout << result;
}