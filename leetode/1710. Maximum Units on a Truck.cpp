#include <bits/stdc++.h>
using namespace std;
bool comparator(vector<int> &x, vector<int> &y)
{
    return (x[1] > y[1]);
}
int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
{
    sort(boxTypes.begin(), boxTypes.end(), comparator);
    int ans = 0;

    for (int i = 0; i < boxTypes.size(); i++)
    {
        int count = min(boxTypes[i][0], truckSize);
        ans += count * boxTypes[i][1];
        truckSize -= count;
        if (truckSize == 0)
        {
            break;
        }
    }
    return ans;
}
int main()
{
}
