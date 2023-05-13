
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int original = n;
    int palindrome = 0;
    if (n % 10 == 0)
    {
        cout << " false";
    }
    while (n != 0)
    {
        palindrome = palindrome * 10 + n % 10;
        n /= 10;
    }
    if (original == palindrome)
    {
        cout << "true";
    }
    else
        cout << "false";
}