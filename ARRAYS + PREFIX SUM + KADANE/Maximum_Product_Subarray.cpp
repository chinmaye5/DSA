#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int c = 1, mx = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            c = c * nums[i];
            mx = max(c, mx);
            if (c == 0)
            {
                c = 1;
            }
        }
        c = 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            c = c * nums[i];
            mx = max(c, mx);
            if (c == 0)
            {
                c = 1;
            }
        }
        return mx;
    }
};