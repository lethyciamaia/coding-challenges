// 2843. Count Symmetric Integers
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i<=high; i++) {
            string istr = to_string(i);
            int siz = istr.size();
            if (siz % 2 == 0) {
                int n1 = 0;
                for (char c : istr.substr(0, siz/2)) n1 += c - '0';
                for (char c : istr.substr(siz/2)) n1 -= c - '0';
                if (n1 == 0) count++;
            } 
        }
        return count;
    }
};