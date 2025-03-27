/* 
*  link: https://neps.academy/br/course/logica-de-programacao/lesson/e-primo
*/  
#include <iostream>
#include <math.h>
#define ll long long

using namespace std;

int main(){
    // Seu código vai aqui
    int prime=1;
    ll n; cin>>n;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i == 0) prime =0;

    if(prime && n!=1) cout <<'S'<<endl;
    else cout <<'N'<<endl;

    return 0;
}
