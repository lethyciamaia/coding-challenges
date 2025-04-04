#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
struct ListNode {  
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
typedef ListNode* pnode;

class Solution {
public:
    pnode addTwoNumbers(pnode l1, pnode l2) {
        pnode res = new ListNode(0), curr = nullptr;
        int val, c = 0;

        pnode i1 = l1, i2 = l2 ;
        while( i1 || i2 ){
            int val = c;

            if (i1) { val+=i1->val; i1=i1->next; }
            if (i2) { val+=i2->val; i2=i2->next; }
            c = val/10; val = val%10;

            curr->next = new ListNode(val);
            curr = curr->next;
        }
        if (c != 0) curr->next = new ListNode(c);

        return res->next;
    }
};