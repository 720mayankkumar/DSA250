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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return mirror(root->left,root->right);
    }
    private:
    bool mirror(TreeNode*a,TreeNode*b){
            if (!a && !b) return true;             // both null: matches
        if (!a || !b) return false;            // only one null: differs
        if (a->val != b->val) return false;    // values differ
        return mirror(a->left, b->right) &&    // outer pair
               mirror(a->right, b->left);      // inner pair
    }
    
};