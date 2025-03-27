/* 
*  link: https://neps.academy/br/course/logica-de-programacao/lesson/codigo
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> build_lps(string s) {
    vector<int> p(s.size());
    for(int i=1,j=0; i<s.size();i++){
        while(j>0 && s[j]!=s[i]) j= p[j-1];
        if(s[j]==s[i]) j++;
        p[i]=j;
    }
    return p;
}

int main(){
    // Seu código vai aqui
    int n;cin>>n;
    string s="";
    string pattern = "100";
    char c;
    for(int i=0;i<n;i++){
        cin>>c;
        s+=c;
    }
    
    vector<int> p = build_lps(pattern+'$'+s);
    int count=0;
    for(int i=0;i<p.size();i++){
        if(p[i]==pattern.size()) count++;
    }
    cout<<count<<endl;
    
    return 0;
}
