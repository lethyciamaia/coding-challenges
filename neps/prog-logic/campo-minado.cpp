/* 
*  link: https://neps.academy/br/course/logica-de-programacao/lesson/campo-minado
*/ 

#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Seu código vai aqui
    int n; cin>>n;
    vector<int> vec(n);

    for(int i=0;i<n;++i) cin>>vec[i];
    int acc=vec[0];
    for(int i=1; i<n;i++){
        acc+=vec[i];
        cout<<acc<<endl;
        if(i>=2) acc-=vec[i-2];
    }
    cout << acc;
    
    return 0;
}
