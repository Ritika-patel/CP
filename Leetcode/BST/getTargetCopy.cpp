/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* x;
    void solve(TreeNode* original, TreeNode* cloned, TreeNode* target){
        if(cloned==NULL) return;
        if(target->val==cloned->val){
            x=cloned;
            return;
        }
        solve(original, cloned->left, target);
        solve(original, cloned->right, target);
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        solve(original, cloned, target);
        return x;
    }
};
