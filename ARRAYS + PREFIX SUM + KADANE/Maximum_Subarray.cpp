#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int mx = INT_MIN, c = 0;
        for (int i : nums)
        {
            c += i;
            mx = max(c, mx);
            if (c < 0)
            {
                c = 0;
            }
        }
        return mx;
    }
};