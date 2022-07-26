/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        int len=0;
        int count;
         ListNode  *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            len++;
        }
        len++;
        temp->next=head;
        //cout<<len<<endl;
        k=k%len;
        count=len-k;
        temp=head;
        ListNode* prev;
        while(count>0){
            prev=temp;
            temp=temp->next;
            count--;
        }
        prev->next=NULL;
        //cout<<" k is"<<" "<<k<<endl;
        return temp;
    }
};
