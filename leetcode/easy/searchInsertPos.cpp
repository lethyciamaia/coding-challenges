// 35. Search Insert Position
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k = 0, n = nums.size();
        for (int b = n/2; b >= 1; b/=2) {
            while(k+b < n && nums[k+b] <= target) k+=b;
        }
        return nums[k] >= target ? k : k+1;
    }
};