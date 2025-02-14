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
    bool isValidBST(TreeNode* root){
        stack <TreeNode*> st;
        TreeNode* prev = NULL;

        while (root || !st.empty()){
            while (root){
                st.push(root);
                root = root->left;
            }
            root = st.top();
            st.pop();

            if(prev && root->val<=prev->val){
                return false;
            }

            prev = root;
            root = root->right;
        }
        return true;
    }
};



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
    bool isValidBST(TreeNode* root){
        return isValidBSTHelper(root, LLONG_MIN, LLONG_MAX);
    }
    bool isValidBSTHelper(TreeNode* root, long min, long max){
        if (root == NULL) return true;
        if (root->val<=min || root->val>=max) return false;
        return isValidBSTHelper(root->left, min, root->val) && isValidBSTHelper(root->right, root->val, max);
    }
};
