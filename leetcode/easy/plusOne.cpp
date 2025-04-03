// 66. Plus One
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int co = 1;
        for (int i = digits.size()-1; i >= 0; i--) {
            digits[i] += co;
            co = 0;
            if (digits[i] == 10) {
                digits[i] = 0;
                co = 1;
            } else return digits;
        }
        if (co == 1) 
            digits.insert(digits.begin(), 1);
        return digits;
    }
};