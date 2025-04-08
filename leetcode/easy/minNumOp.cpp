// 3396. Minimum Number of Operations to Make Elements in Array Distinct
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size()-1;
        vector<bool> v(101, false); 
        for (int i = n; i >= 0; i--) {
            if (v[nums[i]] == true) {
                return i/3 + 1;
            }
            else {
                v[nums[i]] = true;
            }
        }
        return 0;
    }
};