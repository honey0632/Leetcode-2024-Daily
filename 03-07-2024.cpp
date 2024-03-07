// 876. Middle of the Linked List
// https://leetcode.com/problems/middle-of-the-linked-list/


#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};



class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      ListNode* slow =head ,*fast = head;
        if(head==NULL||head->next==NULL){
            return head;
        }

        while(fast && fast->next){
            slow= slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
int main () {
    
     return 0;
}