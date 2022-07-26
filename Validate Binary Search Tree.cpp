class Solution {
public:
    bool fun(TreeNode *root,long max,long min){
        if(root==NULL) return true;
        if(root->val> min and root->val< max){
            return (fun(root->left,root->val,min) and fun(root->right,max,root->val) );
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        return fun(root,LONG_MAX,LONG_MIN);
    }
};