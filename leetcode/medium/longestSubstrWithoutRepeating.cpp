// 2874. Longest Substring Without Repeating Characters
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0, fst = 0, n = s.size();
        unordered_map<char, int> used;
        if (n < 2) return n;
        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (used.find(c) == used.end() || used[c] < fst){
                used[c] = i;
                maxLen = max(maxLen, i - fst + 1);
            } else {
                int idx = used[c];
                used[c] = i;
                fst = idx+1; 
            }
        }
        return maxLen;
    }
};