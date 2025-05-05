// 2089. Find Target Indices After Sorting Array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        auto r = equal_range(nums.begin(), nums.end(), target);
        vector<int> ans;
        for (auto i = r.first; i < r.second; i++) ans.push_back(i - nums.begin());
        return ans;
    }
};