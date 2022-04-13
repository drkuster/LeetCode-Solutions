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
    vector <int> traversal;
    
    vector<int> postorderTraversal(TreeNode* node) {
        if (node == nullptr) {
            return traversal;
        }

        postorderTraversal(node->left);
        postorderTraversal(node->right);
        traversal.push_back(node->val);

        return traversal;
    }
};