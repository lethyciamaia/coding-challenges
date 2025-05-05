// 4. Median of Two Sorted Arrays
#include <bits/stdc++.h>
using namespace std;

// O(m+n log m+n) 
class Solution1 {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert( nums1.end(), nums2.begin(), nums2.end() ); //O(m+n)
        sort(nums1.begin(), nums1.end()); //O(log m+n)
        int n = nums1.size();
        if (n % 2 != 0) return nums1[n/2];
        else return (nums1[n/2-1]+nums1[n/2])/2.0;
    }
};

// TODO: Think of the O(log m+n) solution
// divide-and-conquer to find K smallest element of the two arrays and then calculate median
class Solution2 {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = (nums1.size() + nums2.size());
        // if (n%2==0){ find elems k and k+1} else { find elem k }
    }
};