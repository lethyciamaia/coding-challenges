// 657. Robot Return to Origin
#include <string>

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int pos[2] = {0,0}; // [x, y]
        for (char m : moves) {
            switch (m) {
            case 'U':
                pos[1]++;
                break;
            case 'D':
                pos[1]--;
                break;
            case 'R':
                pos[0]++;
                break;
            case 'L':
                pos[0]--;
                break;
            }
        }
        return pos[0] == 0 && pos[1] == 0;
    }
};