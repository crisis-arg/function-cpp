#include <bits/stdc++.h>
using namespace std;
int trap(vector<int> height)
{
    if (height.size() == 0)
    {
        return 0;
    }
    int l = 0;
    int r = height.size() - 1;
    int leftmax = height[l];
    int rightmax = height[r];
    int result = 0;
    while (l < r)
    {
        if (leftmax < rightmax)
        {
            l++;
            leftmax = max(leftmax, height[l]);
            result += leftmax - height[l];
        }
        else
        {
            r--;
            rightmax = max(rightmax, height[r]);
            result += rightmax - height[r];
        }
    }
    return result;
}
int main()
{
}