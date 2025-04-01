/* 
*  link: https://neps.academy/br/course/logica-de-programacao/lesson/fita-colorida
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Seu código vai aqui
    int n, result; cin>>n;
    int color;
    vector<int> fita(n), zeros;
    for(int i=0;i<n;i++){
        cin>>fita[i]; 
        if(fita[i]==0) zeros.push_back(i);
    }
    for(int i=0, j=0; i<n; i++){
        if (fita[i] == -1) {
            result = j < zeros.size()-1 ?
            min(min(9, abs(i-zeros[j])), abs(i-zeros[j+1])) :
            min(9, abs(i-zeros[j]));
            fita[i]= result;
        }
        if(j < zeros.size()-1 && i == zeros[j+1]) j++;
    }

    for(int i=0;i<n;i++) cout << fita[i]<<" ";
    
    return 0;
}