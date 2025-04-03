// 171. Excel Sheet Column Number
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int idx = columnTitle.size()-1;
        long long colNum = 0;
        for (char c: columnTitle) {
            colNum += pow(26,idx) * (c - 'A' + 1);
            idx--;
        } 
        return colNum;
    }
};