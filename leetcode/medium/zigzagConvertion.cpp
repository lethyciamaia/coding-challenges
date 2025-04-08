// 6. Zigzag Conversion

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        string converted = "";
        int n = numRows-1;
        for (int i = 0; i < numRows; i++) {
            int j = 0, it = i;
            while (it < s.size()){
                // cout << it << endl;
                converted += s[it];
                if (i == 0 || i == n) it += 2*(numRows-1);
                else if (j%2 != 0) it += i + i;
                else it += 2*(n-i);
                j++;
            }
        }
        return converted;
    }
};