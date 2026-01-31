#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &arr, int k)
    {
        int count = 0, cs = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        for (int i : arr)
        {
            cs += i;
            if (m.count(cs - k))
            {
                count += m[cs - k];
            }
            m[cs]++;
        }
        return count;
    }
};