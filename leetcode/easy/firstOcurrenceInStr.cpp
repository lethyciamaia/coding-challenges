#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Find the Index of the First Occurrence in a String
class Solution {
public:
    // KPM String matching 
    vector<int> build_lps(string s) {
        vector<int> lps(s.size());
        for (int i=1, j=0; i<s.size(); i++) {
            while (j>0 and s[j]!=s[i]) j=lps[j-1];
            if (s[j]==s[i]) j++;
            lps[i] = j;
        }
        return lps;
    }

    int strStr(string haystack, string needle) {
        vector<int> p = build_lps(needle+'$'+haystack);
        for (int i = 0; i < p.size(); i++) {
            if (p[i] == needle.size()) return i-2*needle.size();
        }
       return -1;
    }
    // another option:
    // int strStr(string haystack, string needle) {
    //     int b=haystack.find(needle);
    //     return b;
    // }
};