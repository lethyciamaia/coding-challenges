/* 
* link: https://neps.academy/br/course/logica-de-programacao/lesson/atribuindo-equipes
*/  
#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Seu código vai aqui
    vector<int> friends(4);
    for(int i=0;i<4;i++) cin>>friends[i];
    sort(friends.begin(), friends.end());

    int sum1=friends[0]+friends[3], 
    sum2=friends[1]+friends[2]; 
    cout<<abs(sum1-sum2)<<endl;
        
    return 0;
}
