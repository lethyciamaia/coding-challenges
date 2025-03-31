/* Vector
*  link: https://neps.academy/br/exercise/1486
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, i = 0, num, sum = 0;
    vector<int> numbers;
    cin >> n;
    while (i < n){
        cin >> num;
        if (num == 0 && !numbers.empty()) {
            numbers.pop_back();
        } else {
            numbers.push_back(num);
        }
        i++;
    }
    for (auto it: numbers) {
        sum += it;
    }
    cout << sum << endl;

    return 0;
}