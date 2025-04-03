// 268. Missing Number
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sumN = 0, n = nums.size();
        for(int i = 1; i <= n; i++) sumN += i;  
        for(int num : nums) sumN -= num;
        return sumN;
    }
};