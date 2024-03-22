// 234. Palindrome Linked List
// https://leetcode.com/problems/palindrome-linked-list/

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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head ,  *fast = head;
        while(fast->next&&fast->next->next){
            slow = slow->next;
            fast= fast->next->next;
        }
        fast = slow->next;
        ListNode* next = NULL, *prev = NULL;
        while(fast){
            next = fast->next;
            fast->next = prev;
            prev= fast;
            fast = next;
        }
        // ListNode* prev=NULL;
        // ListNode* next=NULL;
        // while(fast!=NULL){
        //     next=fast->next;
        //     fast->next=prev;
        //     prev=fast;
        //     fast=next;
        // }
        slow->next = prev;
        slow = head;
        while(prev){
            if(prev->val != slow->val) return false;
            prev=prev->next;
            slow = slow->next;
        }
        return true;
        
        
    }
};
int main () {
    
     return 0;
}