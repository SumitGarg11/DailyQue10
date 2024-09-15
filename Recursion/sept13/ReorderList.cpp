#include <bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(){
       this->next = NULL;
    }
    ListNode(int val){
        this->val= val;
        this->next= NULL;
    }
};
class Solution {
public:
     
    ListNode* reverseLL(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr!=NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr= nextNode;
        }
        return prev;
    }
    ListNode* Middle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next ){
           
            slow = slow->next ;
            fast= fast->next->next;
        }
        return slow;
    }
    void reorderList(ListNode* head) {
        ListNode* MiddleNode = Middle(head);
        ListNode* rev = reverseLL(MiddleNode);
        ListNode* curr = head;
        while(rev->next != NULL){
        ListNode* tempCurr = curr->next;
        curr->next = rev;
        ListNode* revCurr = rev->next;
        rev->next = tempCurr;
        curr= tempCurr;
        rev = revCurr;
        }
    }
};