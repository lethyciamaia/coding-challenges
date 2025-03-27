/* 
*  link: https://neps.academy/br/course/logica-de-programacao/lesson/botas-trocadas
*/ 
#include <iostream>
#include <map>
    
using namespace std;

int main(){
    // Seu código vai aqui
    map<int,pair<int,int> > stock;
    pair<int,int> aux;
    int n; cin>>n;
    int m, count=0;
    char l;
    for(int i=0;i<n;++i) {
        cin>>m>>l;
        if(stock.find(m)==stock.end()) stock[m]=make_pair(0,0);
        aux = stock[m];
        if (l == 'E') stock[m]=make_pair(aux.first+1, aux.second);
        else stock[m]=make_pair(aux.first, aux.second+1);
    }
    for(auto it: stock) count+=min(it.second.first, it.second.second);
    cout<<count<<endl;

    return 0;
}
