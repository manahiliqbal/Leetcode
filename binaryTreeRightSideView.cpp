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
    vector<int> rightSideView(TreeNode* root) {
        vector <int> res;
        if (root == NULL) return res;
        queue <TreeNode*> q;
        q.push(root);
        
        while (!q.empty()){
            int rightVal = 0;
            int size = q.size();

            for (int i=0; i<size; i++){
                TreeNode* cur = q.front();
                q.pop();
                rightVal = cur->val;
                if (cur->left){
                    q.push(cur->left);
                }
                if (cur->right){
                    q.push(cur->right);
                } 
            }
            res.push_back(rightVal);    
        }
        return res;
    }
};
