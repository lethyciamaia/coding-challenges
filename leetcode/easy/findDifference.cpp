// 389. Find the Difference
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> s1, t1;
        for (char c : s)
            s1[c]++;
        for (char c : t)
            t1[c]++;
        
        for (const auto& [key, _] : t1) 
            if (s1[key] != t1[key]) return key;

        return NULL;
    }
};