class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     ListNode* cur=NULL;
     while(head!=NULL){
         ListNode* next=head->next;
         head->next=cur;
         cur=head;
         head=next;
     }
        return cur;}
};
