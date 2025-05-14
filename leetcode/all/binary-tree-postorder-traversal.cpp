class Solution {
public:

    void postOrderTraversal(TreeNode* root, vector<int> &ans) {
        if(root == nullptr) return;
        postOrderTraversal(root->left, ans);
        postOrderTraversal(root->right, ans);
        ans.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postOrderTraversal(root, ans);
        return ans;
    }
};