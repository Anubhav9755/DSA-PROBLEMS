class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        bool L2R = true; 
        
        while (!q.empty()) {
            int s = q.size();
            vector<int> level(s); 
            
            for (int i = 0; i < s; i++) {
                TreeNode* node = q.front();
                q.pop();
    
                int index = L2R ? i : (s - 1 - i);
                level[index] = node->val;
                
                if (node->left) 
                    q.push(node->left);
                if (node->right) 
                    q.push(node->right);
            }
            
            ans.push_back(level);
            L2R = !L2R; 
        }
        return ans;
    }
};
