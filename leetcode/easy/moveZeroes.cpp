// 283. Move Zeroes
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0, j = 1; j < nums.size(); i++, j++) {
            if (nums[i] == 0) {
                while(nums[j]==0){ 
                    j++;
                    if (j >= nums.size()) return;
                }
                nums[i] = nums[j];
                nums[j] = 0;
            }
        }
    }
};