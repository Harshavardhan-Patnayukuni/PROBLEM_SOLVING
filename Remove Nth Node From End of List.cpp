class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head,int n) {
        if(head==NULL){return head;}
        ListNode* fast,*slow;
        fast=slow=head;
        int i;
        for(i=0;i<n;i++){
            fast=fast->next;
        }
      if(fast==NULL){return head->next;}
      while(fast->next!=0){
          fast=fast->next;
          slow=slow->next;
      }
     slow->next=slow->next->next;
         return head;
        
}
};
