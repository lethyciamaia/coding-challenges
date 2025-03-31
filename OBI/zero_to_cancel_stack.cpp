/* Stack
*  link: https://neps.academy/br/exercise/1486
*/
#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, i = 0, num, sum = 0;
    stack<int> numbers;
    cin >> n;
    while (i < n){
        cin >> num;
        if (num == 0 && !numbers.empty()) {
            numbers.pop();
        } else {
            numbers.push(num);
        }
        i++;
    }
    while (!numbers.empty()){
        sum += numbers.top();
        numbers.pop();
    }
    cout << sum << endl;

    return 0;
}