// 682. Baseball Game
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record = {0};
        int aux;
        for (string op : operations) {
            if (op == "+"){
                aux = record.back() + record[record.size()-2];
            } else if (op == "D") {
                aux = record.back()*2;
            } else if (op == "C") {
                record.pop_back();
                continue;
            } else
                aux = stoi(op);
            
            record.push_back(aux);
        }
        aux = 0;
        for (int i : record) aux += i;
        return aux;
    }
};