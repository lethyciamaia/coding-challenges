/* Set
*  link: https://br.spoj.com/problems/PROIBIDO/
*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, num;
    set<int> illegal_numbers;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        illegal_numbers.insert(num);
    }

    while(cin >> num) {
        if (illegal_numbers.find(num) != illegal_numbers.end()) 
            cout << "sim" << endl;
        else
            cout << "não" << endl;
    }

    return 0;
}