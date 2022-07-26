class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(q.empty()==false){
            Node *current=q.front();q.pop();
            Node *nextnode=q.front();
            if(current!=NULL){
                current->next=nextnode;
                if(current->left!=NULL) q.push(current->left);
                if(current->right!=NULL) q.push(current->right);
            }
            else{
                if(q.empty()==false){
                    q.push(NULL);
                }
            }
        }
   return root; }
};