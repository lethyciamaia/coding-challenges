// 2874. Maximum Value of an Ordered Triplet II
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxInt = 0, maxDiff = 0, maxTri = 0;
        for (long long c : nums) {
            maxTri = max(maxTri, maxDiff * c);
            maxDiff = max(maxDiff, maxInt - c);
            maxInt = max(maxInt, c);
        }
        return maxTri;
    }
};