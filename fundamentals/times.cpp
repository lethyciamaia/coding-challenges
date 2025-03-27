/* Priority Queue
*  link: https://olimpiada.ic.unicamp.br/pratique/p1/2010/f1/times/
*/

#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, t; cin >>n>>t;
    priority_queue< pair<int,string> > dispo;
    vector< vector<string> > teams(t);

    while(n>0){
        n--;
        string name;
        int hp;

        cin>>name>>hp;
        dispo.push(make_pair(hp,name));
    }
    
    int i = 0; 
    while(!dispo.empty()){
        teams[i%t].push_back(dispo.top().second);
        dispo.pop();
        i++;
    }

    for(int i=0;i<t;i++){
        sort(teams[i].begin(), teams[i].end());
        cout<<"Time "<< i+1<<endl;
        for(auto p : teams[i]) cout<<p<<endl;
        cout<<endl;
    }

    return 0;
}
