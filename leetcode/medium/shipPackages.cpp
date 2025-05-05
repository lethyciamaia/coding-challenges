// 1011. Capacity To Ship Packages Within D Days
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPossibleToShip(vector<int>& weights, int capacity, int days) {
        int n = weights.size(), sum=0;
        for (int i: weights){
            if (sum+i > capacity) {
                sum = 0;
                days--;
            }
            sum+=i;
        }
        return days > 0;
    };

    int shipWithinDays(vector<int>& weights, int days) {
        // find min and max for capacity
        // min = biggest elem in arr
        // max = total elems sum 
        int min = 0, max = 0;
        for (auto i : weights) {
            if (min < i) min = i;
            max +=i;
        }
        
        while(min < max) {
            int mid = (max+min)/2;
            if (isPossibleToShip(weights, mid, days)){
                max = mid;
            } else {
                min = mid+1;
            }
        }
        return min;
    }
};