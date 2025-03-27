/* Queue
*  link: https://olimpiada.ic.unicamp.br/pratique/p1/2010/f1/copa/
*/

#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<char> t;
    for(int i=0;i<16;++i) 
        t.push(char(i+65));

    int n, m;
    while (cin >> m >> n) {
        if (m>n) {t.push(t.front()); t.pop(); t.pop();}
        else {t.pop();t.push(t.front()); t.pop();}
    }
    cout << t.front();
        
    return 0;
}