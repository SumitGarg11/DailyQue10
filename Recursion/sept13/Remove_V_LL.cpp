
#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(){
        this->next=NULL;
    }
    ListNode(int val){
        this->next= NULL;
        this->val=val;
    }

};
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val == val){

            head= head->next;
        }
        if(head == NULL) return head;
        ListNode* temp = head;
        while(temp->next != NULL){
            if(temp->next->val == val){
                ListNode* del = temp->next;
                
                temp->next = temp->next->next;
                delete(del);
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};