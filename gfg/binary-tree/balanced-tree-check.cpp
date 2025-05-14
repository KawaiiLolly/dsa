class Solution {
  public:
    
    int height(Node* node) {
        if(!node) return 0;
        int lHeight = height(node->left);
        int rHeight = height(node->right);
        if(lHeight == -1 || rHeight == -1 || abs(lHeight - rHeight) > 1)    return -1;
        return  max(lHeight, rHeight)+1;
    }
  
    bool isBalanced(Node* root) {
        // Code here
        return (height(root)>0);
    }
};