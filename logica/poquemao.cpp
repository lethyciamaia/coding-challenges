/* 
*  link: https://neps.academy/br/course/logica-de-programacao/lesson/po-que-mao
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Seu código vai aqui
    int n, pqm; cin>>n;
    vector<int> pqms;
    
    while(cin>>pqm) pqms.push_back(pqm);
    sort(pqms.begin(), pqms.end());
    int count = 0;
    for(int i=0; i<pqms.size();i++) {
        if (n<pqms[i]) break;
        n-=pqms[i];
        count++;
    }
    cout<<count<<endl;
    return 0;
}
