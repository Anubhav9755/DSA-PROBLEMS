class Solution {
    TreeNode* ans = new TreeNode(0);
    TreeNode* head = ans;

public:
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return head->right;
    }

private:
    void inorder(TreeNode* root) {
        if (root == nullptr) return;

        inorder(root->left);

        ans->right = root;
        root->left = nullptr;
        ans = ans->right;

        inorder(root->right);
    }
};