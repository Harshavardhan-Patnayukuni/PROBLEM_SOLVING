class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        if(root->val==val) return root;
        TreeNode *temp=root;
        while(temp->val!=val){
            
            if(temp->val >val) temp=temp->left;
            else temp=temp->right;
            if(temp==NULL) return NULL;
        }
        return temp;
    }
};