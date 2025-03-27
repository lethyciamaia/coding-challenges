/* 
*  link: https://neps.academy/br/course/logica-de-programacao/lesson/produto-triplo
*/
#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main(){
    // Seu código vai aqui
    int n; cin>>n;
    vector<ll> vec(n);

    for(int i=0;i<n;++i) cin>>vec[i];
    ll lower= vec[0]*vec[1]*vec[n-1];
    ll upper= vec[n-1]*vec[n-2]*vec[n-3];
    cout<<max(lower, upper)<<endl;

    return 0;
}
