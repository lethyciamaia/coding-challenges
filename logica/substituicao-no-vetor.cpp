/* 
** link: https://neps.academy/br/course/logica-de-programacao/lesson/substituicao-no-vetor
*/

#include <iostream>
#include <vector>

using namespace std;

#define inf 0x3f3f3f3f

int main(){
    // Seu código vai aqui
    vector<int> v(10);
    int n;
    int min = inf;
    for(int i=0;i<10;i++){
        cin>>n;
        if(n<min) {
            min = n;     
        }
        v[i] = n;
    }
    cout<<"Menor: "<<min<<endl;
    cout<<"Ocorrencias: ";
    for (int i=0;i<10;i++){
        if(v[i]==min) {
            cout<<i<< " ";
            v[i]=-1;
        }
    }
    cout<<endl;
    for(auto i:v) cout <<i<<" ";
    
    return 0;
}
