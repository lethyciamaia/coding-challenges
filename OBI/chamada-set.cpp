/* Set
*  link: https://olimpiada.ic.unicamp.br/pratique/p1/2010/f2/chamada/
*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, k, i = 0;
    string name;
    set<string> students;
    
    cin >> n >> k;
    while (i < n) {
        cin >> name;
        students.insert(name);
        i++;
    }
    auto it = students.begin();
    advance(it, k-1);
    cout << *it << endl;
    return 0;
}