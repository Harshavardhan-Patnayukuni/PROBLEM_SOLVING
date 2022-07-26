class Solution {
public:
    ListNode* reverse(ListNode* head,ListNode* last){
        ListNode* cur=last;
        while(head!=last){
            ListNode* next=head->next;
            head->next=cur;
            cur=head;
            head=next;
        }
        return cur;
    }
  ListNode* reverseKGroup(ListNode* head, int k) {
            ListNode* node=head;
        for(int i=0;i<k;i++){
            if(node==NULL) return head;
            node=node->next;
        }
      ListNode* newnode=reverse(head,node);
      head->next=reverseKGroup( node, k);
      return newnode;
    }
};
