#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->next = next;

    }
    Node(int data){
      this->data= data;
      this->next = NULL;
    }
};
Node* removeNodeBack(Node* head, int pos){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    if(len == pos){
        Node* newHead = head->next;
        delete(head);
        return newHead;
    }
    temp = head;
    int res = len - pos;
    while(res > 1){
        temp= temp->next;
        res--;
    }
    cout<<temp->data<<endl;
    Node* deleteNode = temp->next;
   
    temp->next = temp->next->next;
     delete(deleteNode);
    return head;
    
}
void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
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
    printLL(head);
    head = removeNodeBack(head,1);
    cout<<"Modified LL :"<<endl;
    printLL(head);

}