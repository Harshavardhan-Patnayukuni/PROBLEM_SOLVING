class Solution {
public:
    int val;
    int ans;
    void traverse(TreeNode *root,int k){
        if(root==NULL) return;
        traverse(root->left,k);
        val--;
        if(val==0) ans=root->val;
        traverse(root->right,k);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        val=k;
        traverse(root,k);
        return ans;
    }
};