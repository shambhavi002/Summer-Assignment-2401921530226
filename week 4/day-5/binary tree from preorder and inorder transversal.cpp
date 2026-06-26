class Solution {
public:

    TreeNode* build(vector<int>& preorder, int ps, int pe,
                    vector<int>& inorder, int is, int ie) {

        if(ps > pe || is > ie)
            return NULL;

        TreeNode* root = new TreeNode(preorder[ps]);

        int k = is;

        while(inorder[k] != preorder[ps])
            k++;

        int leftSize = k - is;

        root->left = build(preorder, ps + 1, ps + leftSize,
                           inorder, is, k - 1);

        root->right = build(preorder, ps + leftSize + 1, pe,
                            inorder, k + 1, ie);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        return build(preorder, 0, preorder.size() - 1,
                     inorder, 0, inorder.size() - 1);
    }
};
