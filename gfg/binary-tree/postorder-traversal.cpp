class Solution {
  public:

    // Function to return a list containing the inorder traversal of the tree.
    void postOrderTraversal(Node* root, vector<int> &ans) {
        if(root == nullptr) return;
        postOrderTraversal(root->left, ans);
        postOrderTraversal(root->right, ans);
        ans.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        // Your code here
        vector<int> ans;
        postOrderTraversal(root, ans);
        return ans;
    }
};