class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans;

        if(root == NULL)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;

        while(!q.empty()) {

            int n = q.size();
            vector<int> level(n);

            for(int i = 0; i < n; i++) {

                TreeNode* node = q.front();
                q.pop();

                int index = leftToRight ? i : n - i - 1;

                level[index] = node->val;

                if(node->left)
                    q.push(node->left);

                if(node->right)
                    q.push(node->right);
            }

            leftToRight = !leftToRight;

            ans.push_back(level);
        }

        return ans;
    }
};
