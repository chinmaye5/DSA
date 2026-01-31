#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int c = 1, n = nums.size();
        vector<int> result(n, 1);

        for (int i = 0; i < n; i++)
        {
            result[i] *= c;
            c *= nums[i];
        }

        c = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            result[i] *= c;
            c *= nums[i];
        }

        return result;
    }
};