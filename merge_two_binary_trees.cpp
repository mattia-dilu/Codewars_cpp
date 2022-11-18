class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == nullptr) return root2;
        if(root2 == nullptr) return root1;
        TreeNode* cur = new TreeNode(root1->val + root2->val);
        if(root1->left != nullptr || root2->left!= nullptr)
            cur->left=mergeTrees(root1->left, root2->left);
        if(root1->right != nullptr || root2->right != nullptr)
            cur->right=mergeTrees(root1->right, root2->right);
        return cur;  
    }
};
