//ITERATIVE
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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL) return 0;
        stack<TreeNode*>st;
        int sum=0;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            if(root->val>=low && root->val<=high) sum+=root->val;
            if(root->right!=NULL) st.push(root->right);
            if(root->left!=NULL) st.push(root->left);
        }
        return sum;
    }
};
                

//RECURSIVE
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

//using preorder traversal root left right;
class Solution {
    public:
    int sum;
    void dfsPreorder(TreeNode* root, int low, int high){
        if(!root) return;
        if(root->val>=low && root->val<=high) sum+=root->val;
        // dfsPreorder(root->left, low, high);
        // dfsPreorder(root->right, low, high);
        if(root->val > low) dfsPreorder(root->left,low,high);
        if(root->val < high) dfsPreorder(root->right,low,high);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        sum=0;
        dfsPreorder(root, low, high);
        return sum;
    }
};
