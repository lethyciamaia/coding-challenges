// 167. Two Sum II - Input Array Is Sorted
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = nums.size()-1; i>=0; i--) {
            int curr = nums[i];
            if(m.find(target-curr) != m.end()) {
                return {i+1, m[target-curr]};
            } else {
                m[curr] = i+1;
            }
        }
        return {};
    }
};