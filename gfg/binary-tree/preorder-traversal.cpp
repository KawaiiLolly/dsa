class Solution {
  public:

    // Function to return a list containing the inorder traversal of the tree.
    void preOrderTraversal(Node* root, vector<int> &ans) {
        if(root == nullptr) return;
        ans.push_back(root->data);
        preOrderTraversal(root->left, ans);
        preOrderTraversal(root->right, ans);
    }
    vector<int> preorder(Node* root) {
        // Your code here
        vector<int> ans;
        preOrderTraversal(root, ans);
        return ans;
    }
};