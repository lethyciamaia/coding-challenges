/* Stack
*  link: https://neps.academy/br/exercise/271
*/

#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    string s;
    char ret;
    stack<char> cadeia;

    cin >> n;
    for(int i = 0; i < n; i++) {
        ret = 'S';
        cin >> s;
        for (auto c: s) {
            if (c == '(' || c == '[' || c == '{') 
                cadeia.push(c);
            else {
                if (cadeia.empty() ||( c - cadeia.top() != 2 &&  c - cadeia.top() != 1)){
                    ret = 'N';
                    cadeia.push(c);
                } else {
                    cadeia.pop();
                }
            }
        }
        if (!cadeia.empty()) ret = 'N';
        cout << ret << endl;

        // clear stack
        while(!cadeia.empty()) {
            cadeia.pop();
        }
    }
    return 0;
}