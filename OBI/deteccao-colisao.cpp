/* Pair
*  link: https://olimpiada.ic.unicamp.br/pratique/p1/2007/f1/colisoes/
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, int> > rectangle(2);
    int coord;

    for(int i = 0; i < 2; i++) {
        cin >> rectangle[i].first >> rectangle[i].second;
    }

    int ret = 0;
    for(int i = 0; i < 4; i++) {
        cin >> coord;
        if (i % 2 == 0) {
            if (coord >= rectangle[0].first && coord <= rectangle[1].first){
                ret = 1;
                break;
            }
        } else { 
            if (coord >= rectangle[0].second && coord <= rectangle[1].second){
                ret = 1;
                break;
            }     
        }
    }
    cout << ret << endl;

    return 0;
}

