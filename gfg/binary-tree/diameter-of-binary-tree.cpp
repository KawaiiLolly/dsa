class Solution {
  public:
    int dia(Node* root, int &ans) {
        if(root == nullptr) return 0;
        int lHeight = dia(root->left, ans);
        int rHeight = dia(root->right, ans);
        ans = max(ans, (lHeight+rHeight));
        return 1+max(lHeight, rHeight);
    }
    int diameter(Node* root) {
        // Your code here
        int ans=0; dia(root, ans); return ans;
    }
};