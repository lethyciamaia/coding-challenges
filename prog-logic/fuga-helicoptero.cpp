/* 
*  link: https://neps.academy/br/course/logica-de-programacao/lesson/fuga-com-helicoptero
*/
#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
    int f, h, p, d;
    cin>>h>>p>>f>>d;
    int dist_h, dist_p;
    
    dist_h= (d*f < d*h) ? d*(h-f) : 16+d*(h-f);
    dist_p= (d*f < d*p) ? d*(p-f) : 16+d*(p-f);
    
    string result = (dist_h < dist_p) ? "S": "N";
    cout<<result<<endl;
    
    return 0;
}
