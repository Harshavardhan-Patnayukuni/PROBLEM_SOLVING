class Solution {
public:
    ListNode* temp;
    bool check(ListNode* p){
        if(p==NULL) return true;
        bool ispal =(check(p->next) && temp->val==p->val);
        temp=temp->next;
      return ispal;
    }
    bool isPalindrome(ListNode* head) {
        temp=head;
        return check(head);
    }
    
};
