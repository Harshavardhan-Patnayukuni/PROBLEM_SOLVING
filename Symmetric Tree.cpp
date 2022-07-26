class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return check(root->left,root->right);
    }
    bool check(TreeNode* left,TreeNode *right){
        if(left==NULL ||right==NULL) return left==right;
        if(left->val!=right->val) return false;
        return check(left->left,right->right) and check(left->right,right->left);
    }
};