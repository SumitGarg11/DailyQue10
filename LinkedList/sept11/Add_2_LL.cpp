#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->next=NULL;

    }
    Node(int data){
        this->data= data;
        this->next = NULL;
    }
};
Node* addNumber(Node* head1, Node* head2){
    Node* t1 = head1;
    Node* t2 = head2;
    Node* dummyNode = new Node();
    Node* temp = dummyNode;
    int c = 0;
    while((t1 != NULL || t2 != NULL) || c ){
        int sum =0;
        if(t1!= NULL){
            sum+= t1->data;
            t1=t1->next;
        }
        if(t2!=NULL){
            sum+= t2->data;
            t2=t2->next;
        }
        sum += c;
        c= sum/10;
        Node* newNode = new Node(sum%10);
        temp->next = newNode;
        temp = temp->next;

    }
    return dummyNode->next;

}
void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;
    Node* tail1 = NULL;
    Node* tail2 = NULL;
    int n1 = 2;
    int n2 =4;
    cout<<" Nodes of LL1 "<<endl;
    for(int i = 1; i <= n1; i++){
        int v;
        cin>>v;
        Node* newNode = new Node(v);
        if(head1 == NULL){
            head1 = newNode;
            tail1 = newNode;
        }
        else{
            tail1->next = newNode;
            tail1 = newNode;

        }
    }
    cout<<"Nodes of LL2"<<endl;
    for(int i = 1; i <= n2; i++){
        int v;
        cin>>v;
        Node* newNode = new Node(v);
        if(head2 == NULL){
            head2 = newNode;
            tail2 = newNode;
        }
        else{
            tail2->next = newNode;
            tail2 = newNode;

        }
    }
    cout<<"LL1: "<<endl;
    printLL(head1);
    cout<<"LL2: "<<endl;
    printLL(head2);
    Node* result = addNumber(head1, head2);
    cout<<"Result :"<<endl;
    printLL(result);


}


