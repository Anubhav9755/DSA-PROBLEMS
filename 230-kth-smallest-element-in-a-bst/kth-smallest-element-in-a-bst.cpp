class Solution {
public:
    void storeInorderTraversal(TreeNode* root,vector<int> &inorder){
        if(root == NULL){
            return ;
        }
        storeInorderTraversal(root->left,inorder);
        inorder.push_back(root->val);
        storeInorderTraversal(root->right,inorder);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> inorder;
        storeInorderTraversal(root,inorder);
        return inorder[k-1];
    }
};