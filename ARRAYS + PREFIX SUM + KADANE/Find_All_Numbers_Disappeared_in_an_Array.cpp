#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> result;
        unordered_map<int, int> mp;

        for (int i : nums)
        {
            mp[i]++;
        }

        for (int i = 1; i <= nums.size(); i++)
        {
            if (!mp.count(i))
            {
                result.push_back(i);
            }
        }

        return result;
    }

    // solution 2 no extra space
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            int idx = abs(nums[i]) - 1;

            if (nums[idx] > 0)
            {
                nums[idx] = -nums[idx];
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                result.push_back(i + 1);
            }
        }

        return result;
    }
};