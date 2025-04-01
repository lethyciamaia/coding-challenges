/* 
** link: https://neps.academy/br/course/logica-de-programacao/lesson/quadrado-magico
*/

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, num; cin>>n;
    vector<int> vec(n*n);
    for (int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cin>>num;
            vec[i*n+j] = num;
        }

    int p_sum, n_magic = 0;
    for (int i=0;i<n;i++) {
        p_sum=0;
        for (int j=0;j<n;j++) p_sum+=vec[i*n+j];
        if(n_magic == 0) n_magic=p_sum;

        if(p_sum != n_magic) {cout << "-1"<<endl;return 0;}
    }
    for (int i=0;i<n;i++) {
        p_sum = 0;
        for (int j=0;j<n;j++) p_sum+=vec[j*n+i];
        if(p_sum != n_magic) {cout << "-1"<<endl;return 0;}
    }
    for (int i=0;i<2;i++) { // always 2 diagon:
        p_sum = 0;
        for (int j=i*(n-1);j<n*n-i;j+= n+1 - i*2) p_sum+=vec[j];
        if(p_sum != n_magic) {cout << "-1"<<endl;return 0;}
    }

    cout << n_magic<<endl;
    return 0;
}