/* 
* link: https://neps.academy/br/course/logica-de-programacao/lesson/fila
*/
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    // Seu código vai aqui
    vector<int> line;
    set<int> left;
    int n, id;cin>>n;
    for(int i=0;i<n;++i){ 
        cin>>id;
        line.push_back(id);
    }
    cin>>n;
    for(int i=0;i<n;++i){ 
        cin>>id;
        left.insert(id);
    }
    
    for(int i=0;i<line.size();++i){ 
        id = line[i];
        if(left.find(id)==left.end()) 
            cout << id << " ";
    }

    return 0;
}
