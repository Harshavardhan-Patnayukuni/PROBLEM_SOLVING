class Solution {
public:
    ListNode* sortList(ListNode* head) {
            ListNode* temp;
          temp=head;
        vector<int> vec;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int n=vec.size();
        int i=0;
        temp=head;
        sort(vec.begin(),vec.end());
        for(i=0;i<n;i++){
            temp->val=vec[i];
            temp=temp->next;
        }
        return head;
    }
};