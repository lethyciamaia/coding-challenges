#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s1, t1;
        for (char c : s) s1[c]++;
        for (char c : t) t1[c]++;
        return s1 == t1;
    }
};