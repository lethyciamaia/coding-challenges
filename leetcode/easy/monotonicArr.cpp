// 896. Monotonic Array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkMonotonic(vector<int>& v, bool (*func) (int, int)) {
        for(int i = 1; i<v.size(); i++) {
            if (func(v[i-1], v[i]) == false) return false;
        }
        return true;
    }

    bool isMonotonic(vector<int>& nums) {
        if (nums.size() < 3) return true;
        else if (nums[0] >= nums.back()){
            return checkMonotonic(nums, [](int a, int b){return a >= b;});
        } else {
            return checkMonotonic(nums, [](int a, int b){return a <= b;});
        }
    }

    /** another solution:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return true;  

        bool increasing = true;
        bool decreasing = true;

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                decreasing = false;
            }
            if (nums[i] < nums[i - 1]) {
                increasing = false;
            }
        }
        return increasing || decreasing;
    } 
    */
};