// 27. Remove Element

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = nums.size() - 1;
        if (nums.empty()) return 0;

        while (i <= j) {
            while (j >= 0 && nums[j] == val) j--;
            if (i>j) break;
            if (nums[i] == val) swap(nums[i], nums[j--]);
            i++;
        }
        return i;
    }
};