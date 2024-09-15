#include <bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(){
        this->next= NULL;
    }
    ListNode(int val){
        this->next= NULL;
        this->val=val;
    }

};
void reorderList(ListNode* head){
    stack<ListNode*> st;
    ListNode* temp = head;
    while(temp != NULL){
        st.push(temp);
        temp = temp ->next;
    }
    temp = head;
    ListNode* curr = head;
    ListNode* tempCurr = curr->next;
    int k = (st.size())/2;
    while(k>0){
        ListNode* topNode = st.top();
        curr->next = topNode;
        topNode->next = tempCurr;
        curr=tempCurr;
        k--;
    }
    curr->next=NULL;

}