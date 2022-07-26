class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        ListNode* head=new ListNode;
        if(n==0) return NULL;
        vector<int> result;
        for(int i=0;i<n;i++){
            ListNode* temp=lists[i];
            if(temp==NULL) continue;
            while(temp!=NULL){
                result.push_back(temp->val);
                temp=temp->next;
            }
        }
        if(result.size()==0) return NULL;
        sort(result.begin(),result.end());

        head->val=result[0];
        ListNode* temp=head;
        
        for(int i=1;i<result.size();i++){
            ListNode* node=new ListNode;
            node->val=result[i];
          temp->next=node;
            temp=temp->next;
        }
        return head;
    }
};
