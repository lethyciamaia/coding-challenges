/* 
* link: https://neps.academy/br/course/logica-de-programacao/lesson/torre
*/
#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Seu código vai aqui
    int n;cin>>n;
    vector< vector<int> > matrix(n, vector<int>(n));
    vector<int> sum_r(n);
    vector<int> sum_c(n);
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];
    // sum row and col
    for(int i=0;i<n;i++){
        sum_r[i]=0;
        sum_c[i]=0;
        for(int j=0;j<n;j++){
            sum_r[i]+=matrix[i][j];
            sum_c[i]+=matrix[j][i];
        }
    }
    
    int max=0, sum_ij;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            sum_ij=sum_r[i]+sum_c[j]-2*matrix[i][j];
            if(sum_ij>max) max = sum_ij;
        }

    cout<<max<<endl;
    
    return 0;
}
