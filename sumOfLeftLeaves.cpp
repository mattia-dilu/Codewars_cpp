/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    void summ(const TreeNode* root, int& sum){
        if(root == nullptr) return;
        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr)
            sum += root->left->val;
        summ(root->left, sum);
        summ(root->right, sum);
        return;
    } 
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        summ(root, sum);
        return sum;
    }
};
