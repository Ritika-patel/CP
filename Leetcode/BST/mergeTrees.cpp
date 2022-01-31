class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* root3 = new TreeNode();
        if(root1==NULL && root2==NULL) return NULL;
        if(root1==NULL && root2!=NULL) root3->val=root2->val;
        if(root1!=NULL && root2==NULL) root3->val=root1->val;
        if(root1!=NULL && root2!=NULL) root3->val=root1->val+root2->val;
        
        root3->left = mergeTrees(root1 == NULL ? NULL: root1->left, root2 == NULL ? NULL: root2->left);
        root3->right= mergeTrees(root1 == NULL ? NULL: root1->right, root2 == NULL ? NULL: root2->right);
        
        return root3;
    }
};
