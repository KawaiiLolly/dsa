class Solution {
  public:
    // Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node* root) {
        // Code here
        vector<int> ans;
        if(root == nullptr) return ans;
        stack<Node*> currLevel;
        stack<Node*> nextLevel;
        currLevel.push(root);
        bool LtoR = true;
        while(!currLevel.empty()) {
            int size = currLevel.size();
            while(size--) {
                Node* curr = currLevel.top();
                currLevel.pop();
                ans.push_back(curr->data);
                if(LtoR) {
                    if(curr->left)  nextLevel.push(curr->left);
                    if(curr->right) nextLevel.push(curr->right);
                } else {
                    if(curr->right) nextLevel.push(curr->right);
                    if(curr->left)  nextLevel.push(curr->left);

                }
            }
            LtoR = !LtoR;
            swap(currLevel, nextLevel);
        }
        return ans;
    }
};