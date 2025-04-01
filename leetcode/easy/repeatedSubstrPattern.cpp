#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    bool repeatedSubstringPattern(string s) {
        vector<int> p(s.size());
        for(int i=1, j=0;i<s.size();i++){
            while(j>0 && s[j] != s[i]) j = p[j-1];
            if(s[j] == s[i]) j++;
            p[i] = j;
        }
        int prefix_size = p[s.size()-1];
        int pattern_size = s.size() - prefix_size;
        return prefix_size > 0 && s.size() % pattern_size == 0;
    }
};