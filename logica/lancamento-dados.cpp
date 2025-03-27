/* 
*  link: https://neps.academy/br/course/logica-de-programacao/lesson/lancamento-de-dados
*/
#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Seu código vai aqui
    int n, value;cin>>n;
    vector<int> count(12), result;
    
    for(int i=0;i<12;i++) count[i] = 0;

    int max=0;
    for(int i=0;i<n;i++) {
        cin>>value;
        count[value-1]++;
        if (count[value-1]>max) max=count[value-1];
        // cout <<"max: "<< max<<endl;
    }

    for(int i=0;i<12;i++) 
        if(count[i] == max) result.push_back(i+1);

    for(auto i: result) cout << i << " ";
    
    return 0;
}
