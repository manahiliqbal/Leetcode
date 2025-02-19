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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        Helper(root, diameter);
        return diameter;
    }
    int Helper (TreeNode* root, int& diameter){
        if (root == NULL) return 0;
        int leftPath = Helper(root->left, diameter);
        int rightPath = Helper(root->right, diameter);
        diameter = max(diameter, leftPath + rightPath);
        return max(leftPath, rightPath) + 1;
    }
};
