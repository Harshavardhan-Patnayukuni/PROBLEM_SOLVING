class Solution {
public:
    Node* copyRandomList(Node* head) {
      if(head==NULL) return NULL;
        Node* current=head;
        unordered_map<Node*,Node*> mpp;
        while(current!=NULL){
            Node* copy=new Node(current->val);
            mpp[current]=copy;
            current=current->next;
        }
        current=head;
         while(current!=NULL){
            mpp[current]->next=mpp[current->next];
             mpp[current]->random=mpp[current->random];
            current=current->next;
        }
    return mpp[head];
    }
};