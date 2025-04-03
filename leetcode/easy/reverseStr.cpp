// 344. Reverse String
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        char aux;
        for(int l = 0, r = s.size()-1; r > l; l++, r--) {
            aux = s[l];
            s[l] = s[r];
            s[r] = aux;
        }
    }
};