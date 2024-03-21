// 206. Reverse Linked List
// https://leetcode.com/problems/reverse-linked-list/

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
    ListNode* reverseList(ListNode* head) {
//         if(head==NULL) return head;
//         ListNode* prev = NULL, *curr = head, *nxt = head->next;
        
//         while(curr->next!=NULL){
//             curr->next = prev;
//             prev=curr;
//             curr=nxt;
//             nxt = nxt->next;
//         }
//         curr->next = prev;
//         return curr;
//         ..............................
//         ..............................
        // ListNode* temp = NULL;
        // while(head!=NULL){
        //     ListNode * next = head->next;
        //     head->next = temp;
        //     temp = head;
        //     head = next;
        // }
        // return temp;
//         ..............................
//         ..............................
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode * newNode = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newNode;
    }
};

int main () {
    
     return 0;
}