// 2873. Maximum Value of an Ordered Triplet I [Easy]
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxNum = 0, maxDiff = 0, maxTri = 0;

        for (long long num : nums){
            maxTri = max(maxTri, maxDiff * num);
            maxDiff = max(maxDiff, maxNum - num);
            maxNum = max(num, maxNum);
        }
        return maxTri;
    }
};