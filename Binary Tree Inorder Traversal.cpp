class Solution {
public:

    void inorder(TreeNode *root,vector<int> &vec){
        if(root==NULL){ return;}
        else {
            inorder(root->left,vec);
            vec.push_back(root->val);
            inorder(root->right,vec);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec;
        inorder(root,vec);
        return vec;
    }
};
