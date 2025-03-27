/* Map
*  link: https://neps.academy/br/course/logica-de-programacao/lesson/cartas
*/

#include <iostream>
#include <map>

using namespace std;

int main(){
    // Seu código vai aqui
    map<int, int> cards;
    int n;
    while(cin>>n){
        if (cards.find(n) == cards.end()) cards[n] = 1;
        else cards[n]++;
    }
    for (auto it : cards)
        if (it.second == 1) cout <<it.first<<endl;

    return 0;
}
