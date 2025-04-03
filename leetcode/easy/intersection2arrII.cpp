// 350. Intersection of Two Arrays II
#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
    unordered_map<int, int> memo;
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans = {};
        for(int c : nums1) memo[c]++;
        for(int c : nums2) {
            if (memo.find(c) != memo.end() && memo[c] > 0) {
                memo[c]--;
                ans.push_back(c);
            }
        }
        return ans;
    }
};