/* Vector
*  link: https://olimpiada.ic.unicamp.br/pratique/pj/2014/f1/fila/
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, i = 0, id, m;
    vector<int> q;

    cin >> n;
    while (i < n) {
        cin >> id;
        q.push_back(id);
        ++i;
    }
    cin >> m;
    i = 0;
    while (i < m) { // sem usar conjuntos
        cin >> id;
        for (auto j = q.begin(); j != q.end(); ++j){
            if (*j == id) {
                q.erase(j);
                break;
            }
        }
        ++i;
    }

    for (auto j: q)
        cout << j << ' ';

    return 0;
}