class Solution {
  public:
    int height(Node* node) {
        // code here
        if(node == nullptr) return -1;
        int lHeight = height(node->left);
        int rHeight = height(node->right);
        
        return max(lHeight, rHeight)+1;
    }
};