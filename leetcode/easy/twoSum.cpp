// 1. Two Sum
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) m[nums[i]] = i;
        for (int i = 0; i < nums.size(); i++) {
            int r = target-nums[i];
            if (m.find(r) != m.end() && m[r] != i) return {i, m[r]};
        }
        return {};
    }
};