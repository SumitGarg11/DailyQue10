#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->next = NULL;

    }
    Node(int data){
        this->data= data;
        this->next = NULL;
    }
};
Node* swapPair(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* temp = head->next;
    head->next = swapPair(head->next->next);
    temp->next = head;
    return temp;
}
int main(){

}