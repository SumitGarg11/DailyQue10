
// class Solution {
// public:
//      ListNode* reverse(ListNode* head) {
//         ListNode* prev = nullptr;
//         ListNode* curr = head;
//         while (curr != nullptr) {
//             ListNode* next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
//     bool isPalindrome(ListNode* head) {
//         // stack<int> st;
//         // ListNode* temp = head;
//         // while(temp != NULL){
//         //     st.push(temp->val);
          
//         //     temp = temp->next;
//         // }
//         // temp = head;
//         // while(temp != NULL){
//         //     int data = st.top();
//         //     st.pop();
//         //     if(temp->val == data){
                
//         //         temp = temp->next;
//         //     }
//         //     else{
//         //            return false;
//         //     }
//         // }
//         // return true;
 
//  ****************************************************************************
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast != NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         ListNode* rev = reverse(slow);
//         while(rev != NULL){
//             if(head->val != rev->val){
//                 return false;
//             }
//             head = head->next;
//             rev = rev->next;
//         }
//         return true;
//     }
// };