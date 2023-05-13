#include <bits/stdc++.h>
using namespace std;
int main()
{
    int val;
    cout << "enter the value" << endl;
    cin >> val;
    for (int i = 1; i <= val; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
