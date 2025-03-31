/* Vector
*  link: https://olimpiada.ic.unicamp.br/pratique/pj/2010/f2/escada/
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, i = 0, t, sum = 0, aux = 0;
    vector<int> instantes;

    cin >> n;
    while (i < n) {
        cin >> t;
        instantes.push_back(t);
        i++;
    }

    for(auto it: instantes) {
        sum += min(10, (it + 10 - aux));
        aux = it + 10;
    }

    cout << sum << endl;

    return 0;
}