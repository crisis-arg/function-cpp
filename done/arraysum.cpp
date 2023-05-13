#include <bits/stdc++.h>
using namespace std;
int main()
{
    float sum = 0;
    float average;
    int yo[5] = {12, 46, 423, 24, 13};
    for (int i = 0; i < 5; i++)
    {
        sum += yo[i];
    }
    cout << sum << endl;
    average = sum / 5;
    cout << average;
}