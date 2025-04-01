#include <string>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        string lc = "";
        for(char c : s) {
            if (c >= 'A' && c <= 'Z') lc += c + 32;
            else lc += c;
        }
        return lc;
    }
};