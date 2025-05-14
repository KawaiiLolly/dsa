class Solution {
public:

    void inOrderTraversal(TreeNode* root, vector<int> &ans) {
        if(root == nullptr) return;
        inOrderTraversal(root->left, ans);
        ans.push_back(root->val);
        inOrderTraversal(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inOrderTraversal(root, ans);
        return ans;
    }
};