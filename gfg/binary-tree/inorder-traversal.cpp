class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void inOrderTraversal(Node* root, vector<int> &ans) {
        if(root == nullptr) return;
        inOrderTraversal(root->left, ans);
        ans.push_back(root->data);
        inOrderTraversal(root->right, ans);
    }
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        inOrderTraversal(root, ans);
        return ans;
    }
};