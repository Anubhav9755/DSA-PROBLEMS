class Solution {
private:
    vector<int> nums;
public:
    TreeNode* balanceBST(TreeNode* root) {
        Inorder(root);
        return buildBST(0, nums.size() - 1);
    }

private:
    void Inorder(TreeNode* node) {
        if (node == nullptr) return;
        Inorder(node->left);
        nums.push_back(node->val);
        Inorder(node->right);
    }

    TreeNode* buildBST(int l, int r) {
        if (l > r) 
        return nullptr;
        int m = (l +r) / 2;
        
        TreeNode* root = new TreeNode(nums[m]);
        root->left = buildBST(l, m - 1);
        root->right = buildBST(m + 1, r);
        return root;
    }
};