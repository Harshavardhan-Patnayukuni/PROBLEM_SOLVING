class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode head;
        head.val=0;
       ListNode* temp=&head;
        int c=0;
        // c is the carry if it is not equal to 0 we should keep it the last
        while(l1!=NULL || l2!=NULL||c!=0){
            c=c+(l1!=NULL?l1->val:0)+(l2!=NULL?l2->val:0);
            temp->next=new ListNode(c%10);
            c=c/10;
            temp=temp->next;
            if(l1!=NULL) l1=l1->next;
            if(l2!=NULL) l2=l2->next;
        }
        return head.next;
    }
};
