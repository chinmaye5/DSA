#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mn = INT_MAX;
        int mx = INT_MIN;
        for (int i : prices)
        {
            mn = min(mn, i);
            mx = max(mx, i - mn);
        }
        return mx;
    }
};