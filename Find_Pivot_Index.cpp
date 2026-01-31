#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int sum = 0;
        int curr_sum = 0;
        int size = nums.size();

        for (int i : nums)
        {
            sum += i;
        }

        for (int i = 0; i < size; i++)
        {
            int left_sum = curr_sum;
            int right_sum = sum - curr_sum - nums[i];

            if (left_sum == right_sum)
            {
                return i;
            }

            curr_sum += nums[i];
        }

        return -1;
    }
};