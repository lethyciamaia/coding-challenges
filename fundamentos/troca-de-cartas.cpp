/* Set
*  link: https://neps.academy/br/exercise/278
*/

#include <iostream>
#include <set>

using namespace std;

int main(){
    // Seu código vai aqui
    set<int> A, B;
    int a, b; cin>>a>>b;

    int c;
    for(int i=0;i<a;++i){
        cin>>c;
        A.insert(c);
    }
    for(int i=0;i<b;++i){
        cin>>c;
        B.insert(c);
    }
    
    auto diff = [](set<int> c1, set<int> c2) {
        int count = 0;
        for(auto i : c1) 
            if(c2.find(i) == c2.end()) count++;
        return count;
    };

    int res =  min(diff(A,B), diff(B,A));
    cout<<res<<endl;        

    return 0;
}
