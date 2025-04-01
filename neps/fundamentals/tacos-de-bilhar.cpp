/* Map
* link: https://neps.academy/br/exercise/54
*/

#include <iostream>
#include <set>

using namespace std;

int main(){
    // Seu código vai aqui
    set<int> stock;
    int c; cin>>c;
    int x, res = 0;
    
    for(int i=0;i<c;++i){
        cin>>x;
        if(stock.find(x) == stock.end()){
            stock.insert(x);
            res+=2;
        }
        else stock.erase(x);
    }
    cout << res<< endl;

    return 0;
}