// 121. Best Time to Buy and Sell Stock
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP = prices[0], maxDiff = 0;
        for (int p : prices) {
            maxDiff = max(maxDiff, p - minP);
            minP = min(minP, p);
        }
        return maxDiff;
    }
};