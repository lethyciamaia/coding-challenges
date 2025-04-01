/* 
*  link: https://neps.academy/br/course/logica-de-programacao/lesson/zerinho-ou-um
*/

#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
    int a,b,c;
    cin>>a>>b>>c;
    char res;

    if (a!=b && a!=c) res='A';
    else if (b!=a && b!=c) res='B';
    else if (c!=a && c!=b) res='C';
    else res='*';
    cout<<res<<endl;
    return 0;
}
