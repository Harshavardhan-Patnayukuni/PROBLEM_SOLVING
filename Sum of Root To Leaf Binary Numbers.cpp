class Solution {
public:
    void fun(TreeNode* root,int &sum,int num){
        if(root->left==NULL and root->right==NULL){
            sum=sum+num*2+root->val;
            return;
        }
        int dummy=num;
        if(root->left!=NULL) {num=num*2+root->val;fun(root->left,sum,num);}
        if(root->right!=NULL) {dummy=dummy*2+root->val;fun(root->right,sum,dummy);}
        
    }
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        fun(root,sum,0);
        return sum;
    }
};
