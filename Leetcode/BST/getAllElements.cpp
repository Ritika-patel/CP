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
    void solve(TreeNode* root, vector<int>& vec){
        if(root==NULL) return;
        vec.push_back(root->val);
        solve(root->left, vec);
        solve(root->right, vec);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>vec;
        solve(root1, vec);
        solve(root2, vec);
        sort(vec.begin(), vec.end());
        return vec;
    }
};
