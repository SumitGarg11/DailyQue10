#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->next= NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
Node* reverseLL(Node* head){
    stack<int> st;
    Node* temp = head;
    while(temp!=NULL){
        st.push(temp->data);
        temp= temp->next;
    }
    temp = head;
    while(temp != NULL){
        temp->data = st.top();
        temp = temp->next;
        st.pop();
    }
    return head;
}
void PrintLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
   
    Node* head = NULL;
    Node* tail =  NULL;
    int n = 5;
    for(int i = 1; i<=n; i++){
        int v;
        cin>>v;
        if(head == NULL){
            Node* newNode = new Node(v);
            head = newNode;
            tail = newNode;

        }
        else{
            Node* newNode = new Node(v);
            tail->next = newNode;
            tail = newNode;
        }
        
    }
     cout<<"Originak LL :"<<endl;
    PrintLL(head);
    head = reverseLL(head);
    cout<<"reverse LL :"<<endl;
    PrintLL(head);

}