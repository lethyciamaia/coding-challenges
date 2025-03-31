/* Stack
*  link: https://olimpiada.ic.unicamp.br/pratique/p2/2016/f1/chaves/
*/

#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, i;
    char ret = 'S';
    string line;
    stack<char> brackets;

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> line;
        for(auto c: line){
            if (c == '{')
                brackets.push(c);
            else if (c == '}'){
                if (brackets.empty()) {
                    ret = 'N';
                } else 
                    brackets.pop();
            }
        }
    }
    if (!brackets.empty()) {
        ret = 'N';
    }
    cout << ret << endl;
    return 0;
}