class Solution {
public:

    bool mirror(TreeNode* a, TreeNode* b) {

        if(a == NULL && b == NULL)
            return true;

        if(a == NULL || b == NULL)
            return false;

        if(a->val != b->val)
            return false;

        return mirror(a->left, b->right) &&
               mirror(a->right, b->left);
    }

    bool isSymmetric(TreeNode* root) {

        if(root == NULL)
            return true;

        return mirror(root->left, root->right);
    }
};
